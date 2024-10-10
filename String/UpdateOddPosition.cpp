#include<iostream>
#include<string>
using namespace std;
void Update( string &str){
    int i = 1;
    while (str.size() > i)
    {
        str[i] = '#';
        i+=2;
    }   
}
int main()
{
    string str = "Pbwcshkuiglhds";
    Update(str);
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] ;
    } 
    return 0;
}