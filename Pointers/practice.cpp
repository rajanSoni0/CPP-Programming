#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int * ptr = 0;
    int a = 10;
    ptr = &a;
    *ptr = a;
    cout << *ptr ;
    cout << " program executed";
    return 0;
}