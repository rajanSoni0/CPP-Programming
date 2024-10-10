#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> v)
{
    for (int i = 0, j = v.size() - 1; i <= j; i++, j--)
    {
        swap(v[i], v[j]);
    }
    return v;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    vector<int> ans = reverse(v);
    for (int i = 0; i < 9; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}