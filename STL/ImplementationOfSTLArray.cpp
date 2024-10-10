#include <iostream>
#include <array>
using namespace std;
int main()
{
    int basic[] = {1, 2, 3, 4};     // We don't use in CPP beacase it's a static array
    array<int, 4> a = {1, 2, 3, 4}; // declaration
    int size = a.size();            // for finding size
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    cout << "Element at 2nd index: " << a.at(2) << endl; // For accessing particular index's element
    cout << "Empty or not: " << a.empty() << endl;       // To check whether array is empty or not
    cout << "First element: " << a.front() << endl;      // for accessing first element
    cout << "Last element: " << a.back() << endl;        // for accessin\g last element
}