#include <iostream>
#include <vector>
using namespace std;
void PrintArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void SortColor(vector<int> &arr)
{
    int low = 0, high = arr.size() - 1, medium = 0;
    while (medium <= high)
    {
        if (arr[medium] == 0)
        {
            swap(arr[low], arr[medium]);
            low++;
            medium++;
        }
        if (arr[medium] == 1)
        {
            medium++;
        }
        if (arr[medium] == 2)
        {
            swap(arr[high], arr[medium]);
            high--;
        }
    }
}
int main()
{
    vector<int> arr = {1, 2, 0, 1, 2, 0, 2, 1, 2, 0, 1, 2, 0};
    cout << "Array before sorting:" << endl;
    PrintArray(arr);
    SortColor(arr);
    cout << "Array after sorting:" << endl;
    PrintArray(arr);
}
