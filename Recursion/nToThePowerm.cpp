#include <iostream>
using namespace std;
long long power(int num, int pow)
{
    if (pow == 0)
    {
        return 1;
    }
    if (pow == 1)
    {
        return num;
    }
    int ans = power(num, pow / 2);
    if (pow & 1)
    {
        return num * ans * ans;
    }
    else
    {
        return ans * ans;
    }
}
int main()
{
    int num, pow;
    cout << "Enter base: ";
    cin >> num;
    cout << "Enter power: ";
    cin >> pow;
    cout << num << " raised to the power " << pow << " is " << power(num, pow);
}