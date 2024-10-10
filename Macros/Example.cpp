#include <iostream>
using namespace std;
#define SQUARE(x) (x * x)
int main()
{
    int n;
    cout << "Enter your number whose square you want: ";
    cin >> n;
    int res = SQUARE(n);
    cout << " The square of " << n << " is "<< res <<endl;
}
