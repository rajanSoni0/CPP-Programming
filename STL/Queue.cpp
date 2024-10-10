#include <iostream>
#include <queue> //A standard container giving FIFO behavior.
using namespace std;
int main()
{
    queue<string> q;
    q.push("How ");
    q.push("are ");
    q.push("you!");
    q.push("I'm fine");
    cout << "Size before pop --> " << q.size() << endl;
    cout << "first element --> " << q.front() << endl;
    cout << "last element --> " << q.back() << endl;
    q.pop(); // first element will be erased
    cout << "first element --> " << q.front() << endl;
    cout << "Size after pop --> " << q.size() << endl;
}
