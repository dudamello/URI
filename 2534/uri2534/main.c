#include <stdio.h>
#include <stdlib.h>


void swap(int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void quickSort (int *a, int left, int right) {
    int i, j, x, y;
    
    i = left;
    j = right;
    x = a[(left + right) / 2];
    
    while(i <= j) {
        while(a[i] > x && i < right) {
            i++;
        }
        while(a[j] < x && j > left) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
    
    if(j > left) {
        quickSort(a, left, j);
    }
    if(i < right) {
        quickSort(a, i, right);
    }
}

int main() {
    int n, q, i;
    int *vn, *vq;
    
//    scanf("%d %d", &n, &q);
    while (scanf("%d %d", &n, &q) != EOF){
    
    vn = (int*)calloc(n, sizeof(int));
    vq = (int*)calloc(q, sizeof(int));
    
    for(i=0; i<n; i++){
        scanf("%d", &vn[i]);
    }
    for(i=0; i<q; i++){
        scanf("%d", &vq[i]);
    }
    
    quickSort(vn, 0, n - 1);
//
//    for(auto i = 0; i != n; i++) {
//        printf("%i ", vn[i]);
//
//    }
//    printf("\n");
    
    
    for(i=0; i<q; i++){
        printf("%d\n", vn[vq[i] - 1]);
    }
    }
    return 0;
}
