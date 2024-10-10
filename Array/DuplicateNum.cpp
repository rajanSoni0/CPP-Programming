#include<iostream>
#include<vector>
using namespace std;
int FindDuplicate(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[0] == arr[i])
        {
            return arr[0];
        }
        swap(arr[0], arr[i]);
    }
    return arr[0];  
}
int main()
{
    int arr[]={5,4,6,3,1,2,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Duplicate element is " << FindDuplicate(arr, size);
}