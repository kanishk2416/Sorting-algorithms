#include <iostream>
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
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
int main() {
    int arr[] = {10,5,6,2,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    selsort(arr, n);
    std::cout << "Sorted array: " << std::endl;
    array(arr, n);
    return 0;
}