#include <iostream>
#include <vector>
using namespace std;
vector<int> rotate(vector<int> num, int k)
{
    int size = num.size();
    vector<int> temp(size);
    for (int i = 0; i < size; i++)
    {
        temp[(i + k) % size] = num[i];
    }
    return temp;
}
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int k;
    cout << "No. of Rotation: " << endl;
    cin >> k;
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
    cout << "Normal Array:" << endl;
    print(v);
    vector<int> ans = rotate(v, k);
    cout << "Rotated Array:" << endl;
    print(ans);
}