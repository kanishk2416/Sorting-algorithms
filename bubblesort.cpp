#include <iostream>
using namespace std;
void swap(int* i, int* j) {
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}
void bubblesort(int arr[], int size) {
    int x = 0;
    do {
        int y = 0;
        do {
            if (arr[y] > arr[y + 1]) {
                swap(&arr[y], &arr[y + 1]);
            }
            y++;
        } while (y < size - x - 1);
        x++;
    } while (x < size - 1);
}
int main() {
    int arr[50], n, x;
    cout << "Enter the Number of Elements array: ";
    cin >> n;
    cout << "Enter the Elements: ";
    for (x = 0; x < n; x++)
        cin >> arr[x];
    bubblesort(arr, n);
    cout << "Array after bubble sort: ";
    for (x = 0; x < n; x++) {
        cout << arr[x] << " ";
    }
    return 0;
}