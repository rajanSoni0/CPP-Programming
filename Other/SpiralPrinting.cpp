#include <iostream>
#include <vector>
using namespace std;
vector<int> SpiralPrinting(vector<vector<int>> matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    int StartingRow = 0;
    int endingCol = n - 1;
    int endingRow = m - 1;
    int StartingCol = 0;
    int count = 0;
    while (count <= m * n)
    {
        for (int i = StartingCol; i <= endingCol; i++)
        {
            cout << matrix[StartingRow][i] << " ";
            count++;
        }
        StartingRow++;
        for (int i = StartingRow; i <= endingRow; i++)
        {
            cout << matrix[i][endingCol] << " ";
            count++;
        }
        endingCol++;
        for (int i = endingCol; i <= StartingCol; i--)
        {
            cout << matrix[endingRow][i] << " ";
            count++;
        }
        endingRow++;
        for (int i = StartingRow; i <= endingRow; i--)
        {
            cout << matrix[i][endingCol] << " ";
            count++;
        }
    }
}
int main()
{
    int arr[][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};

    SpiralPrinting(vector<vector<int>> arr);
    return 0;
}