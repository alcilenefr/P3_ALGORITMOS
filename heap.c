#include <stdio.h>

void swapHeap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void heapify(int v[], int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && v[l] > v[largest]) largest = l;
    if (r < n && v[r] > v[largest]) largest = r;
    if (largest != i) {
        swapHeap(&v[i], &v[largest]);
        heapify(v, n, largest);
    }
}

void algoritmoSort(int v[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) heapify(v, n, i);
    for (int i = n - 1; i > 0; i--) {
        swapHeap(&v[0], &v[i]);
        heapify(v, i, 0);
    }
}
