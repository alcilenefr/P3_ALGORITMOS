#include <stdio.h>

void merge(int v[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++) L[i] = v[l + i];
    for (j = 0; j < n2; j++) R[j] = v[m + 1 + j];
    i = 0; j = 0; k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) { v[k] = L[i]; i++; }
        else { v[k] = R[j]; j++; }
        k++;
    }
    while (i < n1) { v[k] = L[i]; i++; k++; }
    while (j < n2) { v[k] = R[j]; j++; k++; }
}

void mergeSortActual(int v[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSortActual(v, l, m);
        mergeSortActual(v, m + 1, r);
        merge(v, l, m, r);
    }
}

void algoritmoSort(int v[], int n) {
    mergeSortActual(v, 0, n - 1);
}
