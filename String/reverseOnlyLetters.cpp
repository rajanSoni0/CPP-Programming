#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string ReverseOnlyLetters(string str)
{
    int i = 0, j = str.size() - 1;
    while (i <= j)
    {
        if (isalpha(str[i]) && isalpha(str[j]))
        {
            swap(str[i], str[j]);
            i++;
            j--;
        }
        else
        {
            if (isalpha(str[i]))
            {
                j--;
            }
            else
            {
                i++;
            }
        }
    }
    return str;
}
int main()
{
    string str = "Test1ng-Leet=Code-Q!";
    cout << "String after reversing only letters: " << ReverseOnlyLetters(str);
    return 0;
}