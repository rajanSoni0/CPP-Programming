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
    //downcasting
    dog * b = (dog *)new Animal();
    b -> speak();
    return 0;
    
}