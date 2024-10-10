#include <iostream>
#include <limits.h>
using namespace std;
int MinimumIndex(int ans[], int k)
{
    int min = INT_MAX, minindex = -1;
    for (int i = 0; i < k; i++)
    {
        if (ans[i] < min)
        {
            min = ans[i];
            minindex = i;
        }
    }
    return minindex;
}
void Klargest(int *arr, int *ans, int k, int size)
{
    for (int i = k; i < size; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (arr[i] > ans[j])
            {
                int MinIndex = MinimumIndex(ans, k);
                ans[MinIndex] = arr[i];
            }
        }
    }
    cout << k << " largest elements are: ";
    for (int i = 0; i < k; i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int arr[] = {12, 15, 7, 9, 2, 1, 6, 10, 16, 8};
    int k = 4;
    int ans[k];
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < k; i++)
    {
        ans[i] = arr[i];
    }
    Klargest(arr, ans, k, size);
    // cout << k <<" largest elements are: ";
    // for (int i = 0; i < k; i++)
    // {
    //     cout << ans[i] << " ";
    // }

    return 0;
}