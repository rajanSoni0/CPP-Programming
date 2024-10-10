#include<iostream>
using namespace std;
void print(int *arr, int size, int start = 0)
{
    for (int i = start; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {11, 12, 13, 14, 15, 16};
    int size = 6;
    cout << "Without passing argument: " << endl;
    // Here we are not passing argument then it will start with default initial value.
    print(arr, size);
    // Here we are passing argument then it will start from value which be have passed to the function.
    cout << "By passing argument: " << endl;
    print(arr, size, 2);
    return 0;
}