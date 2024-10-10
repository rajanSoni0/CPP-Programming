#include <iostream>
using namespace std;
void BubbleSort(int *arr, int size)
{
    int k = 0;
    for (int i = 1; i < size; i++)
    {
        int c = 0;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                c = 1;
            }
        }

        if (c == 0)
        {
            break;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 9, 8, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, size);
    printf("Sorted Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
}