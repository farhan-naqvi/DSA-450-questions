#include <iostream>
using namespace std;
#include <bits/stdc++.h>
 
void rearrange(int arr[], int n)
{
    int cnt=0;
    for(int i=0;i<n;i++){
        if(cnt<n && arr[cnt]!=arr[i] && arr[i]<0){
            int temp = arr[cnt];
            arr[cnt]=arr[i];
            arr[i]=temp;
            cnt++;
        }
        
    }
}
 
// A utility function to print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
 
// Driver code
int main()
{
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}