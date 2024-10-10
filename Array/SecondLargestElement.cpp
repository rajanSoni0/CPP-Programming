#include <iostream>
#include<limits.h>
using namespace std;
int FindSecondlargest(int arr[], int size)
{
    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (max2 < arr[i] && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }
    return max2;
}
int main()
{
    int arr[] = {2, 5, 9, 8, 6, 7, 1, 4, 3, 17, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    if (size <= 1)
    {
        cout << "No Second Largest Element Exists";
    }
    else
    {
        cout << "2nd Largest Element is " << FindSecondlargest(arr, size);
    }
    return 0;
}