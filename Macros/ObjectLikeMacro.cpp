#include<iostream>
using namespace std;
#define PI 3.14159
int main()
{
    double radius;
    cout << "Enter Radius: ";
    cin >> radius;
    double Area = PI * radius*radius;
    cout << " The area of circle is " << Area << " Unit sqr";
}