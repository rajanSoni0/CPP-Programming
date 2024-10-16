#include<iostream>
#include<unordered_map>
using namespace std;
int FirstRepeated(int arr[],int size)
{
    unordered_map <int, int> hash;
    for (int  i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < size; i++)
    {
        if (hash[arr[i]] > 1)
        {
            return i+1;
        }  
    }
   return -1; 
}
int main()
{
    int arr[]={1,5,6,3,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "First repeating element is present at index " << FirstRepeated(arr, size);
}