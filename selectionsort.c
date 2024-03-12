#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void selsort(int arr[], int n) {
    int i, j, k;
    for (i = 0; i < n - 1; i++) {
        k = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[k])
                k = j;
        swap(&arr[k], &arr[i]);
    }
}
void array(int arr[], int size) {
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int arr[] = {10,5,6,2,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    selsort(arr, n);
    printf("Sorted array: \n");
    array(arr, n);
    return 0;
}