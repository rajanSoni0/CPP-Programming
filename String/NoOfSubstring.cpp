#include<iostream>
using namespace std;

void PrintAllSubstring(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 1; j <= s.size() - i; j++)
        {
            cout << s.substr(i, j) << endl;
        }  
    }   
}

int main()
{
    string str;
    cout << "Enter your string: ";
    cin >> str;
    PrintAllSubstring(str);
}