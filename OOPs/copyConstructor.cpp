#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    string type;
    int weight;
    //constructor
    Animal(int age, int weight, string type){
    this->age = age;
    this -> weight = weight;
    this -> type = type;
}
    //copy constructor
    Animal(Animal &obj){
        this-> age = obj.age;
        this-> type = obj.type;
        this-> weight = obj.weight;
        cout << "I'm inside copy constructor" << endl;
    }
};
int main()
{
    Animal a(10,56,"Raju");
    //Object Copy
    Animal b(a);
    // This can be done in this way too
    // Animal b(a);
    return 0;
}