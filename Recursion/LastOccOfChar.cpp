#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int searchLastoccurance(string &str, char key, int i){
    if (str[i] == key)
    {
        return i;
    }
    if (i < 0)
    {
        return -1;
    }
    searchLastoccurance(str, key, i - 1);
}
int main()
{
    string str = "abcddeddf";
    char key = 'f';
    int i = str.size() - 1;
    int ans = searchLastoccurance(str, key, i);
    if (ans == -1)
    {
        cout << "Key is not present" << endl;
    }
    else
    {
        cout << "Key is present at index: " << ans << endl;
    }
    
    return 0;
}