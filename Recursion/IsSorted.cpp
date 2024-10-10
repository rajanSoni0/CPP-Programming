#include <iostream>
using namespace std;
bool IsSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;
    if (arr[0] < arr[1])
    {
        return IsSorted(arr + 1, size - 1);
    }
    else
    {
        return false;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 72, 7, 8, 9, 10};
    int size = 10;
    cout << endl;
    if (IsSorted(arr, size))
    {
        cout << "Array is Sorted";
    }
    else
    {
        cout << "Array is not Sorted";
    }
    cout << endl;
    cout << endl;
}