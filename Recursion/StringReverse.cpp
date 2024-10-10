#include <iostream>
using namespace std;
void Reverse(string &str, int i, int j)
{
    if (i > j)
    {
        return;
    }
    else
    {
        swap(str[i], str[j]);
        Reverse(str, i+1, j- 1);
    }
}
int main()
{
    string name = "INOS NAJAR";
    cout << "Original String: " << name << endl;
    Reverse(name, 0, name.length() - 1);
    cout << "Reversed String: " << name << endl;
}