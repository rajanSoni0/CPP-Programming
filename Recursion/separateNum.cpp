#include<iostream>
using namespace std;

void separateDigits(int n) {
    if (n == 0) {
        return;
    }
    separateDigits(n / 10);
    cout << n % 10 << " ";
}

int main() {
    int number = 0423; // Leading zero is not preserved
    separateDigits(number);
    return 0;
}
