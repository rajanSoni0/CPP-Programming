#include<iostream>
using namespace std;
int RevPrint(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        cout << num << " ";
        RevPrint(num-1);
    } 
}
int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    RevPrint(num);
}