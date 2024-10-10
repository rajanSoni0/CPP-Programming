#include <iostream>
#include <stack> //LAst in first out
using namespace std;
int main()
{   
    stack<string> s;
    s.push("How ");
    s.push("are ");
    s.push("you!");

    cout<<"Top Element --> "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element --> "<<s.top()<<endl;
    cout<<"size of stack --> "<<s.size()<<endl;
    cout<<"Empty or not --> "<<s.empty()<<endl;
}