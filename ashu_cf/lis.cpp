/*
http://www.geeksforgeeks.org/dynamic-programming-set-3-longest-increasing-subsequence/
Ashutosh Singla <ashu1461@gmail.com>
information: 
#tags: 
date: Fri May 10 13:30:19 IST 2013
*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
void printLIS(int arr[], int lis[], int max, int n)
{
    if(n < 0)
        return;
    if(lis[n] == max)
    {
        printLIS(arr, lis, max-1, n-1);
        cout<<arr[n]<<" ";
    }
    else
    {
        printLIS(arr, lis, max, n-1);
    }
}

int lis(int arr[], int n)
{
    int count = 0;
    int *lis = (int *)malloc(sizeof(int) * n);
    int i, j, index;

    for(int i=0;i<n;i++)
        lis[i] = 1;

    for(int i=1;i<n;i++)
        for(int j = 0; j<i;j++)
        {
            if(arr[i] > arr[j] && lis[i] < lis[j] + 1)
            {
                lis[i] = lis[j] + 1;
                index = i;
            }
        }
    int max = lis[index];
    cout<<endl;

    printLIS(arr, lis, max, n-1);

    free(lis);
    return max;
}

int main()
{
    int n ;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    cout<<endl<<"Longest Increasing Sequence: "<<lis(arr, sizeof(arr)/sizeof(arr[0]));
    getchar();
    return 0;
}
