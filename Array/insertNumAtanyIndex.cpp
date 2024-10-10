#include <iostream>
#include<array>
#include <vector>
using namespace std;
void InsertNum(int arr[],int index, int number, int size)
{
    for (int i = size- 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = number;
}
int main()
{
    int arr[100] = {1};
    int size = 1;
    InsertNum(arr,1,5,size);
    cout << " Array after insertion: ";
    for (int i = 0; i < size + 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}