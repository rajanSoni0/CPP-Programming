#include <iostream>
using namespace std;
void unique(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        int c = 1;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                c = 0;
                break;
            }
        }
        if (c == 1)
        {
            cout << arr[i] << " is a unique element" << endl;
        }
    }
}
int main()
{
    int arr[] = {4, 5, 6, 7, 9, 8, 3, 2, 1, 5, 79, 8, 4, 6, 7, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    unique(arr, size);
}