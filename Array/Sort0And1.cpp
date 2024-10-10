#include <iostream>
using namespace std;
void Sort0And1(int *arr, int size)
{
    int i = 0, start = 0, end = size - 1;
    while (i < end)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            start++;
            i++;
        }
        if (arr[i] == 1)
        {
            swap(arr[i], arr[end]);
            end --;
        }
    }
}
int main()
{
    int arr[] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    Sort0And1(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}