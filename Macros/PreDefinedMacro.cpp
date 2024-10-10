#include<iostream>
using namespace std;
int main()
{
    cout << "Compiled on " << __DATE__ << endl << " Time is " << __TIME__ << endl;
    cout << "This is line  " << __LINE__ << " in the file" << __FILE__ ;
}