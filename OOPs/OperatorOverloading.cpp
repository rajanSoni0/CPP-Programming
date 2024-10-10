#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Parameter{
    public:
    int val;
    int operator+(Parameter &obj2){
        int val1 = this -> val;
        int val2 = obj2.val;
        return (val1 - val2);
    }
};
int main()
{
    Parameter obj1, obj2;
    obj1.val = 7;
    obj2.val = 2;
    
    //this should print the difference between them
    int ans = obj1 + obj2;
    cout << ans;
    return 0;
}