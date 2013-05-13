/*
   Ashutosh Singla <ashu1461@gmail.com>
information: 
#tags: dp dynamic_programming 
date: Fri May 10 13:57:28 IST 2013
 */
#include<iostream>
#include<stdio.h>
using namespace std;
#define floop(a,b,c) for(int a=b;a<c;a++)
#define max(a,b) (a>b?a:b)
int value[100008];
int color[100008];
long long ans[100008];
int n,q;
long long int a,b;
void init(){
    floop(i,0,n+1)
        ans[i]=-51;
}
long long int choosing_balls(int last, int current){
    // decide whether to choose the current element or not provided that the last element choosen is <last>  ..


    if(current==n+1)
        return 0;
    if(ans[last]!=-51)
        return ans[last];
    long long int penalty;
    if(last==0)
        penalty = b*value[current];
    else {
        if(color[last]==color[current])
            penalty = a*value[current];
        else
            penalty = b*value[current];
    }
    ans[last] =  max(choosing_balls(last,current+1), penalty+choosing_balls(current,current+1));
    return ans[last];
}
int main()
{
    cin >> n >> q;
    floop(i,1,n+1)
        cin >> value[i];
    floop(i,1,n+1)
        cin >> color[i];
    floop(i,0,q){
        init();
        cin >> a >> b;
        long long int max1 = -10000000;
        max1 = choosing_balls(0,1);
        cout << max1 << "\n" ; 
    }
    return 0;
}

