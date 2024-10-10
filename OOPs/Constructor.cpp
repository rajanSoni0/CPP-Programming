#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    string type;
    int weight;
Animal(){
    cout << "Constructor Called" << endl;
}
//if we have passed 3 argument in then this constructor will work
Animal(int age, int weight, string type){
    this->age = age;
    this -> weight = weight;
    this -> type = type;
}
Animal(int age, int weight){
    this->age = age;
    this -> weight = weight;
}
};
int main()
{
    Animal lion;
    Animal(17,12,"Hii");
    
    return 0;
}