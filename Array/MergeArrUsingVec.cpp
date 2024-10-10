#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> a1, vector<int> a2)
{
    vector<int> a;
    if (a1.size() == a2.size())
    {

        for (int i = 0; i < a1.size(); i++)
        {
            if (a1[i] < a2[i])
            {
                a.push_back(a1[i]);
                a.push_back(a2[i]);
            }
            else
            {
                a.push_back(a2[i]);
                a.push_back(a1[i]);
            }
        }
        return a;
    }
    else
    {
        for (int i = 0; i < min(a1.size(), a2.size()); i++)
        {
            if (a1[i] < a2[i])
            {
                a.push_back(a1[i]);
                a.push_back(a2[i]);
            }
            else
            {
                a.push_back(a2[i]);
                a.push_back(a1[i]);
            }
        }
        for (int i = min(a1.size(), a2.size()); i < max(a1.size(), a2.size()); i++)
        {
            if (a1.size() > a2.size())
            {
                a.push_back(a1[i]);
            }
            else
            {
                a.push_back(a2[i]);
            }
        }
        return a;
    }
}
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<< v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);
    cout<<"First Array:"<<endl;
    print(v);
    vector<int> w;
    w.push_back(2);
    w.push_back(4);
    w.push_back(6);
    w.push_back(8);
    cout<<"Second Array:"<<endl;
    print(w);
    vector<int> ans=merge(v,w);
    cout<<"Merged Array:"<<endl;
    print(ans);
}