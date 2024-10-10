#include <iostream>
using namespace std;
int IsPalindrom(char *str, int size)
{
    int mid = (size - 1) / 2;
    for (int i = 1; i <= mid; i++)
    {
        if (str[mid - i] != str[mid + i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[] = {"12321"};
    int size = sizeof(str) / sizeof(str[0]);
    if (IsPalindrom(str, size))
    {
        cout << str << " is a palindrom";
    }
    else
    {
        cout << str << " is not a palindrom";
    }
}