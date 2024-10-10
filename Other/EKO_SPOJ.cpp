#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int solve(vector<int> &trees, int ReqHeight)
{
    int start = 0, ans = 0;
    int end = *max_element(trees.begin(), trees.end());
    while (start <= end)
    {
        int mid = (start + end) / 2;
        int total = 0;
        for (int i = 0; i < trees.size(); i++)
        {
            if (trees[i] > mid)
            {
                total += (trees[i] - mid);
            }
        }
        if (total >= ReqHeight)
        {
            start = mid + 1;
            ans = mid;
            
        }
        if (total < ReqHeight)
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> trees{20, 15, 10, 17,25,30,22,18};
    int h = 1;
    int ans = solve(trees, h);
    cout << "The Required Blade height is " << ans;
}