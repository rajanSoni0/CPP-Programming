#include <iostream>
using namespace std;
long long int my_sqrt(int x)
{
    int start = 0, end = x;
    long long int mid = (end + start) / 2;
    long long int ans=-1;
    while (start <= end)
    {
        if ((mid * mid) > x)
        {
            
            end = mid - 1;
        }
        if ((mid * mid) < x)
        {
            ans =mid;
            start = mid + 1;
        }
        else if ((mid * mid) == x)
        {
            return mid;
        }
        mid = (end + start) / 2;
    }
    return ans;
}
double decimal(long long int n,int precision, long long int temp)
{
    double factor =1;
    double ans=temp;
    for (int i = 0; i < precision; i++)
    {
        factor=factor/10;
        for (double j = ans; j*j < n; j=j+factor)
        {
            ans=j;
        } 
    }
    return ans;

}
int main()
{
    long long int n;
    cout << "Enter your number: ";
    cin >> n;
    long long temp=my_sqrt(n);
    cout << "The Square Root of the " << n << " is " << decimal(n,3,temp);
}