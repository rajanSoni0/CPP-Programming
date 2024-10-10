#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int findPairs(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;
    int i = 0, j = 1;
    while (j < nums.size())
    {
        int diff = nums[j] - nums[i];
        if (diff == k)
        {
            ans.insert({nums[i], nums[j]});
            i++, j++;
        }
        else if (diff > k)
        {
            i++;
        }
        else
        {
            j++;
        }
        if (i == j)
        {
            j++;
        }
    }
    return ans.size();
}
int main()
{
    vector<int>arr{6,8,9,2,4,1,7,3,5};
    int num = findPairs(arr,3);
    cout << "There are " << num << " pairs are present in array";
}