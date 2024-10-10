#include <iostream>
using namespace std;
void CommonElement(int *arr1, int size1, int *arr2, int size2, int *arr3, int size3)
{
    cout << "Common Elements are: ";
    int i = 0,j = 0,k = 0;
    while (i < size1 && j < size2 && k < size3)
    {
        if (arr1[i] == arr2[j] && arr1[i] == arr3[k])
        {
            cout << arr1[i] << " ";
            i++, j++, k++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }   
    } 
}
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int arr3[] = {2, 5, 6, 4, 8, 10};
    CommonElement(arr1, sizeof(arr1) / sizeof(arr1[0]), arr2, sizeof(arr2) / sizeof(arr2[0]), arr3, sizeof(arr3) / sizeof(arr3[0]));
}