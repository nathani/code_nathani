/*
   Sonakshi Nathani <sonakshinathani@gmail.com>
information: Cut the rods ....  
#tags: dp dynamic_programming
date: Wed May  8 21:55:58 IST 2013
 */
#include<iostream>
#include<stdio.h>
using namespace std;
int r[100];
int max(int a, int b){
    return a > b ? a : b;
}
int cut_road(int p[], int n){
    if(n==0){
        return 0;
    }
    int ans = -1000;
    for(int i=0;i<n;i++){
        ans = max(ans,p[i]+cut_road(p,n-i-1));
    }
    return ans;
}
int cut_road_mem(int p[],int n){
    if(r[n-1]>=0)
        return r[n-1];
    if(n==0)
        return 0;
    int ans = -1000;
    for(int i=0;i<n;i++){
        ans = max(ans,p[i]+cut_road(p,n-i-1));
    }
    r[n-1] = ans;
}
int main()
{
    int price[100];
    int n,i,len;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&price[i]);
        r[i]=-1000;
    }

    printf("%d\n",cut_road(price,n));
    printf("%d\n",cut_road_mem(price,n));
    return 0;
}

