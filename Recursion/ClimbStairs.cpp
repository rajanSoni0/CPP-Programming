/*You have been given a number of stairs.
 Initially, you at the Oth stair, and you need to reach the Nth stair.
 Each time you can either climb one step or two steps.
 You are supposed to return the number of distinct ways in which you can climb from the Oth step to Nth step.
*/
#include <iostream>
using namespace std;
int CountSteps(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }
    int ans = CountSteps(n - 1) + CountSteps(n - 2);
    return ans;
}
int main()
{
    int n;
    cout << "Enter number of stairs: ";
    cin >> n;
    cout << "There are " << CountSteps(n) << " distinct ways to reach the top of the stairs having";
    return 0;
}