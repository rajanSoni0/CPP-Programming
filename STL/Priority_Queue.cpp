#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> maxi; // method to create max heap
    priority_queue<int, vector<int>, greater<int>> mini; //A standard container automatically sorting its contents.
    maxi.push(1);
    maxi.push(5);
    maxi.push(2);
    maxi.push(4);
    maxi.push(0);
    cout<<"Printing maxi: "<<endl;
    int size = maxi.size();
    for (int i = 0; i < size; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }cout<<endl;
    mini.push(1);
    mini.push(5);
    mini.push(2);
    mini.push(4);
    mini.push(0);
    cout<<"Printing mini: "<<endl;
    size = mini.size();
    for (int i = 0; i < size; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }cout<<endl;
    cout<<"Empty or not --> "<<mini.empty();
}