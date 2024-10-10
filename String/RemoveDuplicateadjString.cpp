#include <iostream>
using namespace std;

string RemoveDuplicate(string s)
{
    string ans = "";
    ans.push_back(s[0]);
    int i = 1;
    while (s.length() > i)
    {
        if (s[i] == ans[ans.length() - 1])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}

int main()
{
    string s = "sabbac";
    
    cout << "String After Removal of adjacent duplicates: " << RemoveDuplicate(s); 

}