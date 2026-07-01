# Relatório de Profiling de Desempenho (gprof)

## Análise de Desempenho
O profiling foi integrado utilizando a flag `-pg` durante a compilação para gerar o arquivo de dados brutos `gmon.out`.

## Grafo de Chamadas (Call Graph)
Os testes demonstraram que a maior parte do tempo de CPU concentrou-se, previsivelmente, nas funções de ordenação de pior caso (como o Bubble Sort rodando o cenário invertido), enquanto os algoritmos de divisão e conquista (Quick Sort e Merge Sort) mantiveram consumo de tempo marginal próximo a 0.01 segundos por amostragem padrão.