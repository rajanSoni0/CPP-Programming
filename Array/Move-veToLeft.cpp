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
void move(vector<int> &arr)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] > 0)
        {
            high--;
        }
        else
        {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
}
int main()
{
    vector<int> arr = {1, 5, -5, 6, -9, 2, -5, -6, 1, 6, -10};
    cout << "Array before moving:" << endl;
    PrintArray(arr);
    move(arr);
    cout << "Array after moving:" << endl;
    PrintArray(arr);
}