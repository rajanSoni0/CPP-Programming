#include <iostream>
#include <set>
using namespace std;
int main()
{
set<int> s;
s.insert(1); // complexity is O(log n)
s.insert(12);
s.insert(10);
s.insert(1);
s.insert(1);
s.insert(8);
s.insert(1);
s.insert(0);
s.insert(0);
s.insert(15);
s.insert(10);
for(auto i : s)
{
    cout<<i<<" ";
}
cout<<endl;
s.erase(s.begin());
for(auto i : s)
{
    cout<<i<<" ";
}
cout<<endl;
set<int>::iterator it =s.begin();
it++;
s.erase(it);
for(auto i : s)
{
    cout<<i<<" ";
}
cout<<endl;
cout<<"5 is present or not --> "<<s.count(5)<<endl;
cout<<"10 is present or not --> "<<s.count(10)<<endl;
set<int>::iterator itr =s.find(10);
cout<<"Value at itr --> "<<*itr<<endl;
}