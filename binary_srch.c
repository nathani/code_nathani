/*
Sonakshi Nathani <sonakshinathani@gmail.com>
information: 
#tags: binary search  
date: Thu May  9 15:04:43 IST 2013
*/
#include<stdio.h>
#include<stdlib.h>
/* binary search is used only for sorted arrays */
void binary_search(int* a,int key,int n)
{
    int right=n-1,left=0,center;
    while(left<=right)
    {
        center = (right + left)/2;
        if(key < a[center] )
            right = center-1;
        else if ( key > a[center])
            left = center +1;
        else if ( key == a[center])
        {
            printf("%d it exists\n",key);
            exit(0);
        }
   }
    printf("KEY NOT FOUND %d\n",key);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER THE KEY TO BE SEARCHED FOR\n");
    int key;
    scanf("%d",&key);
    binary_search(a,key,n);

    return 0;
}

