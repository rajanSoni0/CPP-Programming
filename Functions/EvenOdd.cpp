#include <iostream>
using namespace std;
void Number(int n)
{
    // odd
    if (n & 1)
    {
        cout << n << " is Odd number";
        return;
    }
    // Even
    cout << n << " is Even number";
}
int main()
{
    int n;
    cout << "Enter you number ";
    cin >> n;
    Number(n);
}