#include <iostream>
#include <vector>
using namespace std;
void Intersection(int *arr1, int size1, int *arr2, int size2)
{
    vector<int> arr;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr.push_back(arr2[j]);
                arr2[j] = INT32_MIN;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr1[] = {1, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15};
    int arr2[] = {2, 4, 6, 8, 12, 14, 16};
    Intersection(arr1, (sizeof(arr1) / sizeof(arr1[0])), arr2, (sizeof(arr2) / sizeof(arr2[0])));
}