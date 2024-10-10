#include <iostream>
using namespace std;
void IsRotatedAndSorted(int *arr, int size)
{

    int c = 0, d = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (c == 0)
        {
            d++;
        }
        if (arr[i + 1] < arr[i])
        {
            c++;
        }
    }

    if (arr[size - 1] > arr[0])
    {
        c++;
    }
    if (c == 0 || c == 1)
    {
        cout << "It was a sorted array and rotated by " << d << " times";
    }
    else
    {
        cout << "It was not a sorted array";
    }
}
int main()
{
    int arr[] = {5, 6, 7, 8, 9, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    IsRotatedAndSorted(arr, size);
    return 0;
}