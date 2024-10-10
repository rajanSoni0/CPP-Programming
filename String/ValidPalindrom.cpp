#include <iostream>
using namespace std;
bool CheckPalindrom(string str, int i, int j)
{
    while (i <= j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
        
    }
    return true;
}
bool ValidPalindrom(string str)
{
    int i = 0, j = str.length() - 1;
    while (i <= j)
    {
        if (str[i] != str[j])
        {
            return CheckPalindrom(str, i, j - 1) || CheckPalindrom(str, i + 1, j);
        }
        else
        {
            i++;
            j--;
        }
        
    }
    return true;
}
int main()
{
    string str;
    cout << "Enter your string: "; 
    cin >> str;
    if (ValidPalindrom(str))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }   
}