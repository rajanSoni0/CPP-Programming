#include <iostream>
using namespace std;
// for printing Matrix
void PrintArray(int arr[][4], int row)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
// function for swapping
void Swap(int* arr1, int* arr2)
{
    int temp = *arr1;
    *arr1 = *arr2;
    *arr2 = temp;
}
void RotateArray(int arr[][4], int row)
{
    // Finding Transpose of matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i < j)
            {
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
    //cout << "Printing Transposed Array:" << endl;
   // PrintArray(arr, row);
    //For rotating matrix by 90 degree clockwise
    for (int i = 0, j = row - 1; i < j; i++, j--)
    {
        for (int k = 0; k < row; k++)
        {
            swap(arr[k][i],arr[k][j]);
        }
    }
    cout << "Printing Rotated Array:" << endl;
    PrintArray(arr, row);
}

int main()
{
    int arr[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    cout << "Printing Original Array:" << endl;
    PrintArray(arr, 4);
    RotateArray(arr, 4);
    return 0;
}