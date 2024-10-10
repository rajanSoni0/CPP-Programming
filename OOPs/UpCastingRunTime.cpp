#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Animal{
    public:
    void speak(){
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
    //Upcasting
    Animal* a = new dog();
    a -> speak();
    //Downcasting 
    // Behaviour changes compiler to compiler
    // dog * b = new Animal();
    // b -> speak();
    // return 0;
}