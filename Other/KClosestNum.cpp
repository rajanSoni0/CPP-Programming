#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> twoPtrMeth(vector<int> &nums, int k, int x)
{
    int i = 0, j = nums.size() - 1;
    while (j - i +1 > k)
    {
        if (x - nums[i] > nums[j] - x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return vector<int>(nums.begin() + i, nums.begin() + j + 1);
}
int main()
{
    int k = 2, x = 27;
    vector<int> arr{10, 15, 20, 25, 30, 35, 40};
    vector<int> ans;
    ans = twoPtrMeth(arr, k, x);
    cout << "Closest element are: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}