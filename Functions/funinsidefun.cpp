//Infinite times it will print
#include<iostream>
using namespace std;
int fun2();
int fun()
{
    cout<<"Hello ";
    fun2();
}

int main()
{
fun();
}
int fun2()
{
    cout<<"Hii ";
    fun();
}