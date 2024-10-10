#include<iostream>
#include<cstring>
using namespace std;

void ReplaceSpaces(char ch[], int size)
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
    char sentence[100];
    cout << "Enter your sentence: ";
    cin.getline(sentence, 100);
    ReplaceSpaces(sentence,strlen(sentence));
    cout << sentence;
    // for (int i = 0; i < strlen(sentence); i++)
    // {
    //     cout << sentence[i];
    // }
    

}