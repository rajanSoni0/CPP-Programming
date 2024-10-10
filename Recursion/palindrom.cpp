#include <iostream>
using namespace std;
bool Palindrom(string &str, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    if (str[i] != str[j])
    {
       return false; 
    }
    return Palindrom(str, i+1, j-1);
}
int main()
{
    string name = "Naman kamaN";
    if (Palindrom(name, 0, name.length() - 1))
    {
        cout << "It is a Palindrome";
    }
    else
        cout << "It is not a Palindrome";
    
}