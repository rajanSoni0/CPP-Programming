#include <iostream>
using namespace std;
int ArraySum(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    else
    {  
        return arr[0] + ArraySum(arr + 1, size - 1);
    }

}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    cout << endl;
    cout << "Sum is " << ArraySum(arr, size) << endl;
    cout << endl;
    cout << endl;
}