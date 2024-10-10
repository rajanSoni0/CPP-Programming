/*You are given an array consisting of n integers which denote the position of
a stall. You are also given an integer k which denotes the number of
aggressive cows. You are given the task of assigning stalls to k cows
such that the minimum distance between any two of them is the maximum possible.
*/

#include <iostream>
#include <vector>
using namespace std;
bool IsPossibleSol(vector<int> &stalls, int k, int mid)
{
    int c = 1;
    int pos = stalls[0];
    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - pos >= mid)
        {
            c++;
            pos = stalls[i];
        }
        if (c == k)
        {
            return true;
        }
    }
    return false;
}
int solve(int n, int k, vector<int> &stalls)
{
    int start = 0;
    int end = stalls[stalls.size() - 1] - stalls[0];
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) >> 1;
        if (IsPossibleSol(stalls, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr{1,2,4,8,9};
    int k = 3;
    int n = sizeof(arr) / sizeof(int);
    int ans = solve(n, k, arr);
    cout << "The minimum distance between any two of them is the maximum possible  " << ans;
}