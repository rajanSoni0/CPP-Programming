#include <iostream>
using namespace std;
int IsPalindrome(char *str, int size)
{
    for (int i = 0, j = size-1; i <= j; i++, j--)
    {
        if (str[i] != str[j])
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[] = "aQ23v32Qa";
    int size = (sizeof(str) / sizeof(str[0]))-1;
    if (IsPalindrome(str,size))
    {
        cout << str << " is a palindrome";
    }
    else
    {
        cout << str << " is not a palindrome";
    }
}