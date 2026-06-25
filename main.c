// Trabalho de Ordenacao - Alcilene CSF
#include <stdio.h>

// Força a inclusão do arquivo de ordenação correto via linha de comando
#ifndef ALGO_FILE
#define ALGO_FILE "bubble.c"
#endif

#include ALGO_FILE

int checarOrdenado(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) return 0; // Falhou
    }
    return 1; // Passou
}

void rodarTestes() {
    // Caso de Teste 1: Vetor Invertido
    int t1[] = {5, 4, 3, 2, 1};
    algoritmoSort(t1, 5);
    if (checarOrdenado(t1, 5)) {
        printf("Teste 1 (Invertido): PASSOU\n");
    } else {
        printf("Teste 1 (Invertido): FALHOU\n");
    }

    // Caso de Teste 2: Vetor Aleatório
    int t2[] = {12, 34, 5, 70, 2, 23};
    algoritmoSort(t2, 6);
    if (checarOrdenado(t2, 6)) {
        printf("Teste 2 (Aleatorio): PASSOU\n");
    } else {
        printf("Teste 2 (Aleatorio): FALHOU\n");
    }
}

int main() {
    rodarTestes();
    return 0;
}
