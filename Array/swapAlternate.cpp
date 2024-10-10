#include <iostream>
using namespace std;
void swap(int *arr, int *brr) 
{
    int temp = *arr;
    *arr = *brr;
    *brr = temp;
}
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
void alternate(int *arr, int size)
{
    for (int i = 0, j = 1; i < size, j < size; i += 2, j += 2)
    {
        swap(arr[i], arr[j]);
    }
    printArray(arr,size);
}
int main()
{
    int arr[]={5,10,5,8,6,7,36,78,65,85,96,45,4,56,782,7,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,size);
    alternate(arr,size);
}
