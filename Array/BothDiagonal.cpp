#include<iostream>
using namespace std;
void DiagonalPrint(int arr[][4], int row )
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if ((i == j) || ( i + j == row - 1))
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
            
        }
        cout << endl;
        
    }
    
}
int main()
{
    int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9,0, 1, 2},{3,4,5,6}};
    DiagonalPrint(arr, 4);
    return 0;
}