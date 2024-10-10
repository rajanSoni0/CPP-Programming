#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void AddString(string &str1, string &str2, string &ans, int carry, int p1, int p2)
{
    if (p1 < 0 && p2 < 0 && carry== 0)
    {
        reverse(ans.begin(), ans.end());
        return;
    }
    int num1 = (p1 >= 0 ? str1[p1] : '0') - '0';
    int num2 = (p2 >= 0 ? str2[p2] : '0') - '0';
    int digit = (num1 + num2 + carry) % 10;
    carry = (num1 + num2 + carry) / 10;
    ans.push_back(digit + '0');
    AddString(str1, str2, ans, carry, p1 - 1, p2 - 1);
}
int main()
{
    string str1 = "99999";
    string str2 = "1";
    string ans = "";
    int i = str1.size();
    int j = str2.size();
    int carry = 0;
    AddString(str1, str2, ans, carry, i - 1, j - 1);
    cout << ans;
    return 0;
}