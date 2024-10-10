#include <iostream>
using namespace std;
void FindMissing(int *arr, int size)
{
    int i = 0;
    while (i < size)
    {
        int index = arr[i] - 1;
        if (arr[index] == arr[i])
        {
            i++;
        }
        else
        {
            swap(arr[index], arr[i]);      
        }
    } 
    cout << "Missing Element: ";
    for (int i = 0; i < size; i++)
    {
       if (arr[i] != i + 1)
       {
        cout << i + 1 <<" ";
       }    
    } 
    cout << "Duplicate Element: ";
    for (int i = 0; i < size; i++)
    {
       if (arr[i] != i + 1)
       {
        cout << arr[i] <<" ";
       }    
    }
}
int main()
{
    int arr[]={1,5,6,3,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    FindMissing(arr, size);
}