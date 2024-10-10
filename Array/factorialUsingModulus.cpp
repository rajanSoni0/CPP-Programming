#include <iostream>
using namespace std;

#define MAX 500

// Function to compute num (mod a)
int mod(string num, int a) {
    int res = 0;
    for (int i = 0; i < num.length(); i++)
        res = (res * 10 + num[i] - '0') % a;
    return res;
}

// Example usage
int main() {
    string num = "100";
    cout << "Factorial of given number (mod 10) is: " << mod(num, 10);
    return 0;
}