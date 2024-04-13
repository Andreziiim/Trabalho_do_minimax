# Análise de Desempenho com Algoritmos Minimax 📒

Este projeto demonstra a avaliação de desempenho de três algoritmos Minimax implementados em C++, juntamente com a geração de gráficos para visualização dos resultados utilizando o Gnuplot.

## Funcionalidades

O código consiste em três principais funcionalidades:

1. **Geração de Dados Aleatórios:** Utiliza a função `generateRandomData` para criar vetores de tamanhos específicos preenchidos com números aleatórios no intervalo de 0 a 1000.
2. **Avaliação de Desempenho:** Usa a função `evaluateMinimax` para medir o tempo médio de execução de cada algoritmo Minimax para diferentes tamanhos de entrada. Os algoritmos são avaliados várias vezes (10 vezes por padrão) para obter uma média confiável.
3. **Visualização dos Resultados:** Gera um arquivo `execution_times.dat` contendo os tempos médios de execução dos algoritmos para os tamanhos de entrada especificados. Em seguida, usa o Gnuplot para criar gráficos que mostram como os tempos de execução variam com o tamanho da entrada para cada algoritmo Minimax.

## Implementação das Funções Minimax 🛠️

Os algoritmos Minimax são implementados em três funções separadas em `minimax.cpp`:

- `minimax1`: Implementação simples do algoritmo Minimax.
- `minimax2`: Outra implementação do algoritmo Minimax.
- `minimax3`: Uma terceira implementação do algoritmo Minimax.

Cada função recebe um vetor de inteiros como entrada e retorna um resultado específico calculado pelo algoritmo Minimax correspondente.

## Medições e Armazenamento de Tempo de Execução ⏱️

A função `evaluateMinimax` é responsável por medir o tempo de execução de cada algoritmo Minimax. Ela executa cada algoritmo várias vezes com o mesmo conjunto de dados e calcula a média dos tempos de execução.

Os tempos médios de execução são armazenados em um arquivo `execution_times.dat`, onde cada linha contém o tamanho da entrada seguido pelos tempos médios de execução dos algoritmos Minimax para esse tamanho de entrada.

## Geração de Gráficos com Gnuplot 📈

Após a avaliação de desempenho, os dados são usados para criar gráficos informativos com o Gnuplot. O script Gnuplot embutido no código configura o título, rótulos dos eixos e as linhas dos gráficos com os dados do arquivo `execution_times.dat`. Cada gráfico exibe os tempos médios de execução dos algoritmos Minimax em relação ao tamanho da entrada.

## Análise Assintótica 📝

Cada implementação do algoritmo Minimax possui uma complexidade de tempo associada que descreve seu desempenho em relação ao tamanho da entrada. A análise assintótica é importante para entender como o tempo de execução cresce com o tamanho dos dados de entrada.

### Considerações sobre Desempenho

- A complexidade de tempo das implementações do Minimax pode variar dependendo da abordagem utilizada.
- É importante avaliar o desempenho relativo das implementações em diferentes cenários de entrada.

## Visualização dos Resultados

Os tempos médios de execução para cada algoritmo e tamanho de entrada são visualizados em gráficos gerados pelo Gnuplot.

Espero que este README forneça uma visão clara sobre a implementação dos algoritmos Minimax e sua análise de desempenho. Se precisar de mais informações ou esclarecimentos, não hesite em perguntar!


## Relação com a Análise Assintótica

A análise de desempenho realizada neste projeto permite comparar o comportamento prático dos algoritmos Minimax para diferentes tamanhos de entrada. A partir dos gráficos gerados, podemos observar como o tempo de execução dos algoritmos se comporta à medida que o tamanho da entrada aumenta.

A relação com a análise assintótica dos algoritmos Minimax permite verificar se os comportamentos teóricos (por exemplo, complexidade de tempo) se refletem nos tempos de execução observados experimentalmente para os tamanhos de entrada especificados.

## Execução 🚀

Para compilar e executar o projeto, siga estas etapas:

1. Certifique-se de ter o compilador g++ instalado no seu sistema.
2. Abra um terminal e navegue até o diretório do projeto.
3. Compile o código executando o comando `make`.
4. Execute o programa gerado com `./main`.

Os gráficos gerados pelo Gnuplot serão exibidos automaticamente após a execução do programa.

## Conclusão

Este projeto demonstra uma abordagem prática para avaliar o desempenho de algoritmos utilizando técnicas de medição de tempo e visualização de dados. A combinação de implementação de algoritmos, medição de desempenho e geração de gráficos proporciona insights valiosos sobre o comportamento prático dos algoritmos em diferentes cenários de entrada.

Espero que esta explicação forneça uma compreensão mais clara da implementação das funções do código e sua relação com a análise assintótica. Se precisar de mais informações ou esclarecimentos, não hesite em perguntar!
