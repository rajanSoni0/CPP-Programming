#include <iostream>
using namespace std;
void unique(int *arr, int size)
{
    int a = 0;
    for (int i = 0; i < size; i++)
    {
        a = a ^ arr[i];
    }
    cout << a << " is a unique element";
}
int main()
{
    int arr[] = {1, 2, 3, 4, 3, 4, 2, 5, 1};
    unique(arr, 9);
}