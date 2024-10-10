#include <iostream>
#include <vector>
#include <string>
using namespace std;
string LongCommonString(vector<string> strs)
{
    string ans;
    int i = 0;
    while (true)
    {
        char Curr_ch = 0;
        for (auto str : strs)
        {
            // For checking bound
            if (i >= str.size())
            {
                Curr_ch = 0;
                break;
            }
            if (Curr_ch == 0)
            {
                Curr_ch = str[i];
            }
            else if (Curr_ch != str[i])
            {
                Curr_ch = 0;
                break;
            }
        }
        if (Curr_ch == 0)
        {
            break;
        }
        ans.push_back(Curr_ch);
        i++;
    }
    return ans;
}
int main()
{
    vector<string> strs ={"Flower", "Flow", "Floght", "Fly"};
    string ans = LongCommonString(strs);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    return 0;
}