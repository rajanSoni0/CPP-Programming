#include <iostream>
using namespace std;
int main()
{
    int rupee, n;
    cout << "Enter amount: ";
    cin >> rupee;
    while (rupee != 0)
    {
        if (rupee >= 500)
        {
            n = 1;
        }
        if (rupee >= 100 && rupee < 500)
        {
            n = 2;
        }
        if (rupee >= 10 && rupee < 100)
        {
            n = 3;
        }
        if (rupee >= 1 && rupee < 10)
        {
            n = 4;
        }
        switch (n)
        {
        case 1:
        {
            int notes = rupee / 500;
            rupee = rupee - (notes * 500);
            cout << notes << " Five Hundred Rupee notes" << endl;
            break;
        }
        case 2:
        {
            int notes = rupee / 100;
            rupee = rupee - (notes * 100);
            cout << notes << " One Hundred Rupee notes" << endl;
            break;
        }
        case 3:
        {
            int notes = rupee / 10;
            rupee = rupee - (notes * 10);
            cout << notes << " Ten Rupee notes" << endl;
            break;
        }
        case 4:
        {
            
            cout <<rupee << " One Rupee notes";
            rupee =0;
            break;
        }
        }
    }
}