#include<iostream>
using namespace std;
bool LinearSearch(int arr[], int size, int target)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == target)
    {
        return true;
    } 
    else
    {
         LinearSearch(arr + 1,size - 1, target);
    }
    
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 72, 7, 8, 9, 10};
    int size = 10, target = 18;
    cout << endl;
    if (LinearSearch(arr, size, target))
    {
        cout << "Element found!";
    }
    else
    {
        cout << "Element not found";
    }
    cout << endl;
    cout << endl;
}