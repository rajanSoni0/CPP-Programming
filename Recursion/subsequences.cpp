#include<iostream>
#include<string>
using namespace std;
void printSubSequences(string &str, string output, int i){
    if (i >= str.length())
    {
        cout << output << endl;
        return;
    }
    //output.push_back(str[i]);
    printSubSequences(str, output, i + 1);
    output.push_back(str[i]);
    printSubSequences(str, output, i + 1);
}
int main()
{
    string str = "abc";
    string output = "";
    int i = 0;
    printSubSequences(str, output,i);
    return 0;
}