#include <iostream>
using namespace std;
int find(string sentence, string target)
{
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == target[0])
        {
            int j = i + 1, k = target.length() - 1, l = 1, m = i + target.length();
            int count = 1;
            while (j <= k)
            {
                if (sentence[j] == target[l] && sentence[m] == target[k])
                {
                    k--;
                    j++;
                    l++;
                    m--;
                    if (++count == target.length())
                    {
                        return i;
                    }                    
                }
                else
                {
                    break;
                }  
            }
        }
    }
    return -1;
}
int main()
{
    string str = "Rajan Soni";
    string target = "Raj";
    int ans = find(str, target);
    if (ans == -1)
    {
        cout << "SubString is not present";
    }
    else
    {
        cout << "SubString is present at index " << ans;
    }
    
}