#include <iostream>
using namespace std;

string RemoveSubString(string s, string part)
{

    while (1)
    {
        int index = s.find(part);
        if (index >= 0 && index < s.length())
        {
            s.erase(index, part.length());
        }
        else
        {
            return s;
        }
    }
}

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << "String After Removal of all occuring parts: " << RemoveSubString(s, part);
}