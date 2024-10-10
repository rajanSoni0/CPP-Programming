#include<iostream>
#include<list> //A standard container with linear time access to elements, and fixed time insertion/deletion at any point in the sequence.
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    for(int i : l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"After erase"<<endl;
    for(int i : l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}