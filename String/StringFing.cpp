#include<iostream>
#include<cstring>
using namespace std;

void Find(string ch, int size)
{
    int i = 0;
    while (ch[i] != '\0')
    {
        if (ch[i] == ' ')
        {
            ch[i] = '@';
        }
        i++;  
    }  
}
int main()
{
    cout << "Enter your sentence: ";
    string sentence;
    getline(cin, sentence);
    Find(sentence,sentence.length());
    cout << sentence;
    // for (int i = 0; i < strlen(sentence); i++)
    // {
    //     cout << sentence[i];
    // }
    

}