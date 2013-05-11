/*
Sonakshi Nathani <sonakshinathani@gmail.com>
information: 
#tags: dp dynamic_programming
date: Thu May  9 03:26:19 IST 2013
*/
#include<iostream>
#include<stdio.h>
using namespace std;
int length;
int len[2020];
struct data{
    int value;
    int r;
    int b;
};
data ans[2020];
int min(int a,int b){
    return a>b ? b : a;
}
int fence(int r, int b, int n, int last){
    if (n==length)
        return 0;
    int nb,nr;
     if(ans[n+1].r >=r && ans[n+1].b >= (b-len[n]))
         nb = ans[n+1].value;
     else{
         if(b-len[n]<0)
             nb = 10000;
         else
         nb = fence(r,b-len[n],n+1,1);
     }
     if(ans[n+1].r >= (r -len[n]) && ans[n+1].b >= b)
         nr = ans[n+1].value;
     else{
         if(r-len[n]<0)
             nr = 10000;
         else
         nr = fence(r-len[n],b,n+1,0);
     }
     int minu = min(len[n],len[n-1]);
    if(last==1){
  //      printf("it was previous blue coloring blue and red %d %d %d %d -- %d %d\n",r,b,n,last,fence(r,b-len[n],n+1,1),min(len[n],len[n-1])+fence(r-len[n],b,n+1,0));
        ans[n].value = min(nb,minu+nr);
    }
    else{
    //    printf("it was previous red coloring red and blue %d %d %d %d -- %d %d\n",r,b,n,last,fence(r-len[n],b,n+1,0),min(len[n],len[n-1])+fence(r,b-len[n],n+1,1));
        ans[n].value =  min(nr,minu+nb);
    }
//  ans[n].value = min(nb,nr);
    ans[n].r = r;
    ans[n].b = b;
    return ans[n].value;
}
int main()
{
    freopen("INPUT.TXT","r",stdin);
    freopen("OUTPUT.TXT","w",stdout);
    scanf("%d",&length);
    int r,b;
    scanf("%d %d",&r,&b);
    int total=0;
    for(int i=0;i<length;i++){
        scanf("%d",&len[i]);
        ans[i].value = -1;
        total = total + len[i];
    }
    if(total>r+b)
        ans[0].value = 10000;
    else
        ans[0].value = min(fence(r-len[0],b,1,0),fence(r,b-len[0],1,1));
    if(ans[0].value==10000)
        cout << "-1\n";
    else
        cout << ans[0].value << "\n";
    return 0;
}
