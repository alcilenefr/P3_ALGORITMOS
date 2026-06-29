#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Inclui os arquivos de ordenação diretamente para que o gcov meça a cobertura deles
#include "../bubble.c"
#include "../selection.c"
#include "../insertion.c"
#include "../merge.c"
#include "../quick.c"
#include "../heap.c"

// Função auxiliar para verificar se o vetor está realmente ordenado
void verificar_ordenacao(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        assert(arr[i] <= arr[i + 1]);
    }
}

// Função para resetar o vetor antes de testar cada algoritmo
void inicializar_vetor(int arr[], int n) {
    arr[0] = 5; arr[1] = 2; arr[2] = 9; arr[3] = 1; arr[4] = 5; arr[5] = 6;
}

int main() {
    int n = 6;
    int vetor[6];

    printf("--- INICIANDO OS TESTES DOS ALGORITMOS ---\n\n");

    // 1. Testando Bubble Sort
    inicializar_vetor(vetor, n);
    bubbleSort(vetor, n); // Substitua pelo nome exato da sua função se for diferente
    verificar_ordenacao(vetor, n);
    printf("[OK] Bubble Sort testado com sucesso.\n");

    // 2. Testando Selection Sort
    inicializar_vetor(vetor, n);
    selectionSort(vetor, n);
    verificar_ordenacao(vetor, n);
    printf("[OK] Selection Sort testado com sucesso.\n");

    // 3. Testando Insertion Sort
    inicializar_vetor(vetor, n);
    insertionSort(vetor, n);
    verificar_ordenacao(vetor, n);
    printf("[OK] Insertion Sort testado com sucesso.\n");

    // 4. Testando Merge Sort
    inicializar_vetor(vetor, n);
    mergeSort(vetor, 0, n - 1);
    verificar_ordenacao(vetor, n);
    printf("[OK] Merge Sort testado com sucesso.\n");

    // 5. Testando Quick Sort
    inicializar_vetor(vetor, n);
    quickSort(vetor, 0, n - 1);
    verificar_ordenacao(vetor, n);
    printf("[OK] Quick Sort testado com sucesso.\n");

    // 6. Testando Heap Sort
    inicializar_vetor(vetor, n);
    heapSort(vetor, n);
    verificar_ordenacao(vetor, n);
    printf("[OK] Heap Sort testado com sucesso.\n\n");

    printf("--- TODOS OS TESTES PASSARAM COM SUCESSO! ---\n");
    return 0;
}