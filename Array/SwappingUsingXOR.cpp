#include <iostream>
using namespace std;
void swapUsingXOR(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    int x = 5;
    int y = 10;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    swapUsingXOR(x, y);

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
