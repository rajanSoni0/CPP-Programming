#include <iostream>
using namespace std;
void rotate(int *arr, int size, int k)
{
    for (int i = 0; i < k; i++)
    {
        int j = 0, temp1, temp2 = arr[0];
        while (j < size - 1)
        {
            temp1 = arr[j + 1];
            arr[j + 1] = temp2;
            temp2 = temp1;
            j++;
        }
        if (j == size - 1)
        {
            arr[0] = temp2;
        }
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    cout<<"Normal Array: "<<endl;
    for ( int i = 0; i < 9; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;  
    rotate(arr,9,2);
    cout<<"Rotated Array: "<<endl;
    for ( int i = 0; i < 9; i++)
    {
       cout<<arr[i]<<" ";
    }
}