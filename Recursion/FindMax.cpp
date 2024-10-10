#include <iostream>
#include <limits.h>
using namespace std;
int FindMax(int arr[], int maxi, int n, int i)
{
    if (i >= n)
    {
        return maxi;
    }
    maxi = max(arr[i], maxi);
    return FindMax(arr, maxi, n, i + 1);
}
int main()
{
    int arr[] = {10, 30, 41,44,32,17,19,66};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int max = INT_MIN;
    cout << "Max Num is: " << FindMax(arr, max, size, i);
    return 0;
}