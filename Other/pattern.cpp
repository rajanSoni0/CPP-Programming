#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int k = n;
            if (i <= j)
            {
                cout << n - i << " ";
            }
            if (i > j)
            {
                cout << k - j << " ";
                k--;
            } 
        }
        cout << endl;      
    } 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int k = n;
            if (i <= j)
            {
                cout << n - i << " ";
            }
            if (i > j)
            {
                cout << k - j << " ";
                k--;
            } 
        }
        cout << endl;      
    } 

    return 0;
}