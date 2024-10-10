#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool ValidAnagram(string s, string t)
{
    if (s.size() != t.size())
    {
        return false;
    }

    int arr[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {

        arr[(int)s[i]]++;
    }
    for (int i = 0; i < t.size(); i++)
    {
        arr[(int)t[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if (arr[i] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string str;
    cout << "Enter your string: ";
    getline(cin, str);
    string ToCheck;
    cout << "Enter your string which we have to check: ";
    getline(cin, ToCheck);
    if (ValidAnagram(str, ToCheck))
    {
        cout << "Valid anagram";
    }
    else
    {
        cout << "Not a valid Anagram";
    }
}