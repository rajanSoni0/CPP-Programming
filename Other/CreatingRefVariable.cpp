#include <iostream>
using namespace std;
void update1(int &n)
{
    n++;
}
void update2(int n)
{
    n++;
}
int main()
{
    int n = 5;
    cout << "Before calling function value of n: " << n << endl;
    update2(n);
    cout << "After calling function update2 value of n: " << n << endl;
    update1(n);
    cout << "After calling function update1 value of n: " << n << endl;
}