#include <iostream>
using namespace std;
void insertionSort(int *arr, int size)
{
    int i = 1;
    while (i < size)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
        i++;
    }
}
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1};
    insertionSort(arr,9);
    printf("Sorted Array:\n");
    for (int i = 0; i < 9; i++)
    {
       printf("%d  ",arr[i]);
    }
    
}