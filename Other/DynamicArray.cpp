#include <iostream>
using namespace std;
int getSum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter Size of array: " << endl;
    cin >> n;
    int *arr = new int[n]; // We can't assign name to memory allocated dynamically because it returns address of allocated memory and it can be accessed using pointer.
    // In above case pointer is created in stack memory and new int[n] is created into heap memory.
    cout << "Enter element of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = getSum(arr, n);
    cout << "The sum of array element is " << ans;
    while (true)
    {
        int a = 5; // In this case memory will be created in every iteration and it will be erased automatically when we will come out after every iteration.
    }
    while (true)
    {
        int *a = new int;
        // In this case will be created one in stack (Pointer's) and one in heap(new int) in every iteration.
        // but this time memory allocated in stack will be erased after every iteration but memory allocated in heap will not be erased after every iteration.
        // Memory alloacted in heap should be deleted manually using "delete a".
        // In case of array we can erase by "delete []arr".
    }
}