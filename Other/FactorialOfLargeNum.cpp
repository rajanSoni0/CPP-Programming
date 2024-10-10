#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> Factorial(int num)
{
    vector<int> ans;
    ans.push_back(1);
    int carry = 0;
    for (int i = 2; i <= num; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            int x = ans[j] * i + carry;
            ans[j] = x % 10;
            carry = x / 10;
        }
        while (carry)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse(ans.begin(), ans.end());
    for (int k = 0; k < ans.size(); k++)
    {
        cout << ans[k];
    }
    return ans;
}
int main()
{
    int num;
    cout << "Enter the number whose factorial you want: ";
    cin >> num;
    cout << "The factorial of " << num << " is ";
    Factorial(num);
}