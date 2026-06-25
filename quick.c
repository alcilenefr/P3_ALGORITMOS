#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int v[], int low, int high) {
    int pivot = v[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (v[j] < pivot) {
            i++;
            swap(&v[i], &v[j]);
        }
    }
    swap(&v[i + 1], &v[high]);
    return (i + 1);
}

void quickSortActual(int v[], int low, int high) {
    if (low < high) {
        int pi = partition(v, low, high);
        quickSortActual(v, low, pi - 1);
        quickSortActual(v, pi + 1, high);
    }
}

void algoritmoSort(int v[], int n) {
    quickSortActual(v, 0, n - 1);
}
