//Used to reduce the function calls overhead
#include<iostream>
using namespace std;
inline int GetMax(int &a, int &b)
{
    return ((a > b) ? a : b);
}
/*Here during compile time GetMax( ) will be replaced by (a > b) ? a : b
automatically and execution will be fast.
If we have more than 3 line in inline function then it will behave as a noramal
function.
*/
int main()
{
    int a = 1, b = 2;
    int ans = 0;
    ans = GetMax(a, b);
    cout << ans << endl;
    a = a + 3;
    b = b + 1;
    ans = GetMax(a, b);
    cout << ans << endl;
    a = a + 3;
    b = b + 1;
    ans = GetMax(a, b);
    cout << ans << endl;
}