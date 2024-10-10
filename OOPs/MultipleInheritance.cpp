#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class A{
    public:
    int physics;
};
class B{
    public:
    int chemsitry;
};
class C: public A, public B{
    public:
    int maths;
};
void printObj(){
    C obj;
    obj.physics = 95;
    obj.chemsitry = 82;
    obj.maths = 99;
    cout << obj.physics << " " << obj.chemsitry << " " << obj.maths << endl;
}
int main()
{
    printObj();
    // C obj;
    // obj.physics = 95;
    // obj.chemsitry = 82;
    // obj.maths = 99;
    // cout << obj.physics << " " << obj.chemsitry << " " << obj.maths << endl;   
    return 0;
}