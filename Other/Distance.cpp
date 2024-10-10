#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
float finddistance(int* arr1, int *arr2, int dimesion){
    int ans[dimesion];
    for (int i = 0; i < dimesion; i++)
    {
        ans[i] = pow((arr1[i] - arr2[i]),2);
    }
    int sum = 0;
    for (int i = 0; i < dimesion; i++)
    {
        sum+=ans[i];
    }
    return sqrt(sum);
}
int main()
{
    int dimesion;
    cout << "Enter dimesnsion: ";
    cin >> dimesion;
    int arr1[dimesion];
    int arr2[dimesion];
    cout << "Enter  1st point's dimension  in order like(x1 y1 z1.....)";
    for (int i = 0; i < dimesion; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter  2nd point's dimension  in order like(x2 y2 z2.....)";
    for (int i = 0; i < dimesion; i++)
    {
        cin >> arr2[i];
    }
    cout << "Distance betwwen point 1 and point 2 is: " << finddistance(arr1,arr2,dimesion);
    return 0;
}