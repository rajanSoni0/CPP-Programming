#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int trap(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int max_left = 0, max_right = 0;
    int trapped_water = 0;

    while (left < right) {
        if (height[left] <= height[right]) {
            max_left = max(max_left, height[left]);
            trapped_water += max_left - height[left];
            left++;
        } else {
            max_right = max(max_right, height[right]);
            trapped_water += max_right - height[right];
            right--;
        }
    }

    return trapped_water;
}
int main()
{
    vector<int> hights = {0,1,0,2,1,0,1,3,2,1,2,1};
    int total = trap(hights);
    cout << "Total stored water: " << total;
    return 0;
}