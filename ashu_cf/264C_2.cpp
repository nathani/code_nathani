/*
   Ashutosh Singla <ashu1461@gmail.com>
information: 
#tags: dp dynamic_programming 
date: Fri May 10 13:57:28 IST 2013
 */
#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
#define floop(a,b,c) for(int a=b;a<c;a++)
int main()
{
    int value[100008],color[100008],n,q,a,b;
    cin >> n >> q;
    floop(i,1,n+1)
        cin >> value[i];
    floop(i,1,n+1)
        cin >> color[i];
    long long int ans = -1e9;
    map<long long,int> mymap;
    map<long long,int>:: reverse_iterator it;
    long long A[100008];
    long long u;
    floop(i,0,q){
        cin >> a >> b;
        ans = -1e9;
        floop(j,0,n+1)
        A[j] = -1e9; // array to hold the colors ... 
        mymap[0]=0;
        mymap[-1]=-1;
        floop(j,1,n+1){
            u = -1e9;
            it=mymap.rbegin();
            floop(kk,0,2){
                if(it->second!=color[j])
                    u = max(u,it->first+value[j]*b);
                ++it;
            }
            if(A[color[j]]!=-1e9)
            u = max(u,A[color[j]]+a*value[j]); // in case we take the same value ...    
            A[color[j]] = max(A[color[j]],u);
            mymap[u] = color[j];
            ans = max(ans,u);
        }
        if(ans<=0)
            ans = 0 ;
        cout << ans << "\n";
        mymap.clear();
    }
    return 0;
}

