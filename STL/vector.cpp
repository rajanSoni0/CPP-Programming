#include <iostream>
#include <vector> //A standard container which offers fixed time access to individual elements in any order.
using namespace std;
int main()
{
    vector<int> c(4);
    for (int i : c)
    {
        cout << i << " ";
    }cout << endl;
    vector<int> a(10,3);//vector having size 10 and all element as 3 and if we dont initialize then all element start with
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int>last(a);
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;
    c.clear();
    vector<int> v;
    cout << "Capacity --> " << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity --> " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity --> " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity --> " << v.capacity() << endl;
    v.push_back(4);
    cout << "Capacity --> " << v.capacity() << endl;
    cout << "Element at Index 0 is " << v.at(0) << endl;
    cout << "Element at Index 1 is " << v.at(1) << endl;
    cout << "Element at Index 2 is " << v.at(2) << endl;
    cout << "Element at Index 3 is " << v.at(3) << endl;
    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;
    cout << "Before Pop:" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "After pop:" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout<<"Size before clear: "<<v.size()<<endl;
    v.clear();
    cout<<"Size after clear: "<<v.size()<<endl;

}