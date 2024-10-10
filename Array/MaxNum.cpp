#include <iostream>
using namespace std;
int maxNum(int *arr, int size)
{
    int max = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[] = {1, 5, 6, 7, 9, 2, 5, 6, 9, 1};
    cout << "Max Element is " << maxNum(arr,(sizeof(arr)/sizeof(arr[0])));
}