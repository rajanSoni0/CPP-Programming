#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Maths{
    public:
    int sum(int a, int b){
        cout << "I'm in the first Signature" << endl;
        return a + b; 
    }
    int sum(int a, int b, int c){
        cout << "I'm in the second Signature" << endl;
        return a + b + c; 
    }
    int sum(int a, float b){
        cout << "I'm in the third Signature" << endl;
        return a + b + 100; 
    }
};
int main()
{
    Maths s;
    int num1 = s.sum(1,2,3);
    float num = s.sum(1,2.5f);
    cout << num << endl;
    cout << num1 << endl;
    return 0;
}