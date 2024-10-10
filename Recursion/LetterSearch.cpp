#include<iostream>
#include<string>
using namespace std;
bool Search(string str, char ch, int i, int size ){
    if (str[i] == '\0')
    {
        return false;
    }
    if (str[i] == ch)
    {
        return true;
    }
    return Search(str, ch, i + 1, size);
}
int main()
{
    string name = "Love Babbar";
    int size = name.size(), i = 0;
    char ch = 'p';
    if (Search(name,ch, i, size))
    {
       cout << "Letter is present"; 
    }
    else
    {
        cout << "Letter is not present";
    }  
    return 0;
}