#include <iostream>
using namespace std;
int peakElement(int *arr, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int c = 1;
    while (start < end)
    {
        if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
        c++;
    }
    cout << "Total no of steps: " << c << endl;
    return mid;
}

int main()
{
    int arr[] = {1, 2, 4, 6, 7, 8, 10, 15, 19, 20, 22, 24, 65, 17, 10, 8, 4, 3, 1};
    cout << "Peak is present at index " << peakElement(arr, 15);
    return 0;
}