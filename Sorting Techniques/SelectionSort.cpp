#include<iostream>
using namespace std;
void SelectionSort(int *arr, int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1;  j< size; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }
    
}
int main()
{
    int arr[]={2,9,7,6,8,4,5,1};
    SelectionSort(arr,8);
    printf("Sorted Array:\n");
    for (int i = 0; i < 8; i++)
    {
       printf("%d  ",arr[i]);
    }
    

}