#include <iostream>
#include <vector>
using namespace std;
void UnionArray(int arr1[], int size1, int arr2[], int size2)
{
    int i = 0, j = 0;
    vector<int> arr;
    while (i < size1 && j < size2)
    {
        if (arr1[i] == arr2[j])
        {
            arr.push_back(arr1[i]);
            i++;
            j++;
        }

        if (arr1[i] < arr2[j])
        {
            arr.push_back(arr1[i]);
            i++;
        }
        else
        {
            arr.push_back(arr2[j]);
            j++;
        }
    }
    if (size1 > size2)
    {
        while (i < size1)
        {
            arr.push_back(arr1[i]);
            i++;
        }
    }
    else
    {
        while (j < size2)
        {
            arr.push_back(arr2[j]);
            j++;
        }
    }
    for (int k = 0; k < arr.size(); k++)
    {
        cout << arr[k] << " ";
    }
}
int main()
{
    int arr1[] = {1, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15};
    int arr2[] = {2, 4, 6, 8, 12, 14, 16};
    UnionArray(arr1, (sizeof(arr1) / sizeof(arr1[0])), arr2, (sizeof(arr2) / sizeof(arr2[0])));
}