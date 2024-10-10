#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool Isomorphic(string s, string t)
{
    int hash[256] = {0}; //mapping of each char of language 's' to language 't'
    bool istCharsMapped[256] = {0};// stores if t[i] char already mapped with s[i]

    for (int i = 0; i < s.size(); i++)
    {
        if (hash[s[i]] == 0 && istCharsMapped[t[i]] == 0)
        {
            hash[s[i]] = t[i];
            istCharsMapped[t[i]] = true;
        }
        
    }
    
    for (int i = 0; i < s.size(); i++)
    {
        if (char(hash[s[i]]) != t[i])
        {
            return false;
        }
        
    }
    
}
int main()
{
    
    return 0;
}