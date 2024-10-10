#include <iostream>
#include <deque> //A standard container using fixed-size memory allocation and constant-time manipulation of elements at either end.
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    cout << "First index element: " << d.at(0) << endl;
    cout << "Front: " << d.front() << endl;
    cout << "Back: " << d.back() << endl;
    cout << "Empty or not: " << d.empty() << endl;
    cout << "Size before erase: " << d.size() << endl;
    d.erase(d.begin() + 1);
    cout << "size after erase: " << d.size() << endl;
    for (int i : d)
    {
        cout << i << " " << endl;
    }
}