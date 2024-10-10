#include <iostream>
using namespace std;
void ArraySum(int *arr1, int size1, int *arr2, int size2, int *arr, int max)
{
    int carry = 0;
    for (int i = max - 1; i >= 0; i--)
    {
        if (i >= min(size1, size2) - 1)
        {
            int temp = arr1[i] + arr2[i] + carry;
            arr[i] = temp % 10;
            carry = temp / 10;
        }
        else
        {
            if (size1 > size2)
            {
                int temp = arr1[i] + carry;
                arr[i] = temp % 10;
                carry = temp / 10;
            }
            else
            {
                int temp = arr2[i] + carry;
                arr[i] = temp % 10;
                carry = temp / 10;
            }
        }
    }
    for (int i = 0; i < max; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr1[] = {9, 9, 9, 9, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {1};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size = max(size1, size2);
    int arr[size];
    ArraySum(arr1, size1, arr2, size2, arr, size);
}