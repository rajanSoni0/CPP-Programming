#include <iostream>
using namespace std;
void count(int *arr, int size)
{
    int count1 = 0, count0 = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        if (arr[i] == 1)
        {
            count1++;
        }
    }
    cout << "No of Zeros are " << count0 << " and no of ones are " << count1;
}
int main()
{
    int arr[] = {1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    count(arr, size);
}