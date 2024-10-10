#include <iostream>
using namespace std;

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int *arr1, int m, int *arr2, int n, int *arr3, int p) {
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < m) {
        arr3[k++] = arr1[i++];
    }
    while (j < n) {
        arr3[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7, 9}, arr2[] = {0, 2, 4, 6, 8, 10};
    cout << "First Array:" << endl;
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printArray(arr1, size1);
    cout << "Second Array:" << endl;
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printArray(arr2, size2);
    int size = size1 + size2;
    int arr3[size];
    merge(arr1, size1, arr2, size2, arr3, size);
    cout << "Merged Array:" << endl;
    printArray(arr3, size);
    return 0;
}
