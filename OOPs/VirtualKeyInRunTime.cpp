#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Animal{
    public:
    virtual void speak(){
        cout << "Speaking" << endl;
    }
};
class dog: public Animal{
    public:
    void speak(){
        cout << "Barking" << endl;
    }
};
int main()
{
    //With Use of virtual keyword Output will be Barking
    Animal* a = new dog();
    a -> speak();

    //Without Use of virtual keyword Output will be Speaking
    Animal* a = new dog();
    a -> speak();
    return 0;
}