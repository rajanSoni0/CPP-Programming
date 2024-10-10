#include <iostream>
using namespace std;
int powernum(int num, int pow)
{
    int res = 1;
    while (pow > 0)
    {
        if (pow & 1)
        {
            res = res * pow;
        }
        num = num * num;
        pow >> 1;
    }
    return ;
}
int main()
{
    int num,pow;
    cout<<"Enter your number: ";
    cin>>num;
    cout<<"Enter Power: ";
    cin>>pow;
    cout<<num<<" to the power "<<pow<<" is "<<powernum(num,pow);
}