#include <iostream>
#include <vector>
#include <chrono>
#include <fstream>
#include "minimax.hpp" // Inclui o cabeçalho com as definições dos algoritmos

// Função para gerar um vetor de 'size' números aleatórios entre 0 e 1000
std::vector<int> gerarDadosAleatorios(int size) {
    std::vector<int> data(size);
    for (int i = 0; i < size; ++i) {
        data[i] = rand() % 1001; // Gera número aleatório entre 0 e 1000
    }
    return data;
}

// Função para avaliar o tempo de execução médio de um algoritmo Minimax
double avaliarMinimax(int(*minimaxFunc)(const std::vector<int>&), const std::vector<int>& data, int numTrials) {
    double tempoTotal = 0.0;
    for (int i = 0; i < numTrials; ++i) {
        auto inicio = std::chrono::steady_clock::now();
        minimaxFunc(data);
        auto fim = std::chrono::steady_clock::now();
        tempoTotal += std::chrono::duration<double>(fim - inicio).count();
    }
    return tempoTotal / numTrials; // Retorna o tempo médio de execução
}

int main() {
    const int numTrials = 10;
    std::vector<int> tamanhos = {1000, 10000, 100000, 500000};

    std::ofstream arquivoDados("tempos_execucao.dat"); // Arquivo para armazenar os tempos de execução

    // Avaliar os algoritmos para diferentes tamanhos de entrada e armazenar os tempos de execução
    for (int tamanho : tamanhos) {
        std::vector<int> dados = gerarDadosAleatorios(tamanho);

        double tempoMedio1 = avaliarMinimax(minimax1, dados, numTrials);
        double tempoMedio2 = avaliarMinimax(minimax2, dados, numTrials);
        double tempoMedio3 = avaliarMinimax(minimax3, dados, numTrials);

        arquivoDados << tamanho << " " << tempoMedio1 << " " << tempoMedio2 << " " << tempoMedio3 << std::endl;
    }

    arquivoDados.close();

    // Gerar gráfico usando Gnuplot
    FILE *gnuplotPipe = popen("gnuplot -persist", "w");
    if (gnuplotPipe) {
        fprintf(gnuplotPipe, "set title 'Tempos de Execução'\n");
        fprintf(gnuplotPipe, "set xlabel 'Tamanho da Entrada'\n");
        fprintf(gnuplotPipe, "set ylabel 'Tempo Médio (segundos)'\n");
        fprintf(gnuplotPipe, "plot 'tempos_execucao.dat' using 1:2 with lines title 'Minimax1', \
                                    '' using 1:3 with lines title 'Minimax2', \
                                    '' using 1:4 with lines title 'Minimax3'\n");
        fflush(gnuplotPipe);
        std::cout << "Pressione Enter para sair..." << std::endl;
        std::cin.get(); // Aguarda entrada para fechar o Gnuplot
        pclose(gnuplotPipe); // Fecha o pipe do Gnuplot
    } else {
        std::cerr << "Erro ao iniciar o Gnuplot." << std::endl;
    }

    return 0;
}
