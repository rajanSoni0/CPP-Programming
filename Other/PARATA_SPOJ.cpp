#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool IsPossibleSolution(vector<int> &CooksRanks, int nP, int mid)
{
    int currP = 0;
    for (int i = 0; i < CooksRanks.size(); i++)
    {
        int R = CooksRanks[i], j = 1;
        int timeTaken = 0;
        while (1)
        {
            if (timeTaken + j * R <= mid)
            {
                currP++;
                timeTaken += j * R;
                j++;
            }
            else
            {
                break;
            }
        }
        if (currP >= nP)
        {
            return true;
        }
    }
    return false;
}
int timeTaken(vector<int> &cooksRank, int nP)
{
    int start = 0;
    int highestRank = *max_element(cooksRank.begin(), cooksRank.end());
    int end = highestRank * (nP * (nP + 1) / 2);
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) >> 1;
        if (IsPossibleSolution(cooksRank, nP, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> CooksRank {1,2,3,4};
    int parata = 5;
   int time = timeTaken(CooksRank,parata);
   cout << "Minimum time taken by Cooks is making " << parata << " will be " << time <<" minutes";
}