#include<iostream>
using namespace std;
//Class creation
class Animal{
    private:
    int weight;
    public:
    int age;
    string name;
    void eat(){
        cout << "Eating" << endl;
    }
    void sleep(){
        cout << "Sleeping" << endl;
    }
    // int getWeight(){
    //     return weight;
    // }
    // void setweight( int w){
    //     weight = w;
    // }
    int getWeight(){
        return weight;
    }
    void setweight( int weight){
        this -> weight = weight;
    }
};

int main()
{
    //Object creation


    //By Static Memory
    Animal ramesh;
    ramesh.age = 10;
    ramesh.name = "Sher";
    cout << "Age of ramesh is: " << ramesh.age << endl;
    cout << "Name of ramesh is: " << ramesh.name << endl;
    ramesh.eat();
    ramesh.sleep();

    //accessing private element
    ramesh.setweight(50);
    cout << "weight: " << ramesh.getWeight();

    //By dynamic Memory 
    Animal * suresh = new Animal;
    (*suresh).name = "Billi";
    (*suresh).sleep();

    // other method is 
    suresh-> age = 17;
    suresh->eat();
    return 0;
}