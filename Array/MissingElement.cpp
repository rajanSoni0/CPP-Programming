#include<iostream>
using namespace std;
void FindMissing(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int index = abs(arr[i]);
        if (arr[index - 1] > 0)
        {
            arr[index - 1] *= -1;
        }  
    }
    cout << "Missing Element: ";
    for (int i = 0; i < size; i++)
    {
       if (arr[i] > 0)
       {
        cout << i + 1 <<" ";
       }    
    }  
}
int main()
{
    int arr[]={1,5,6,3,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    FindMissing(arr, size);
}