/*
Ashutosh Singla <ashu1461@gmail.com>
information: In this example, we see how a functional lib works.. making pairs, how to sort without writing the sorting function exaclty ..
#tags: dp dynamic_programming functional pairs 
date: Fri May 10 13:57:28 IST 2013
 */
#include<algorithm>
#include<iostream>
#include<stdio.h>
#include<map>
#include<functional>
using namespace std;
#define floop(a,b,c) for(int a=b;a<c;a++)
long long inf = 1000000000000;
int main()
{
    int value[100008],color[100008],n,q,a,b;
    cin >> n >> q;
    floop(i,1,n+1)
        cin >> value[i];
    floop(i,1,n+1)
        cin >> color[i];
    long long ans;
    pair <long long, int> m[3];
    long long A[100008];
    long long u;
    floop(i,0,q){
        cin >> a >> b;
        ans = 0;
        floop(j,0,n+1)
        A[j] = -inf; // array to hold the colors ...
        m[0] = m[1] = m[2] = make_pair(0,-1);
        floop(j,1,n+1){
            u = -inf;
            floop(kk,0,2){
                if(m[kk].second!=color[j])
                    u = max(u,m[kk].first);
            }
            u = u + (long long)value[j]*b;
            if(A[color[j]]!=-inf)
                u = max(u,A[color[j]]+(long long)a*value[j]); // in case we take the same value ...    
            A[color[j]] = max(A[color[j]],u);
            ans = max(ans,u);
            if (m[0].second == color[j])
                m[0].first = max(m[0].first, u);
            else if (m[1].second == color[j])
                m[1].first = max(m[1].first, u);
            else
            {
                m[2].first = u;
                m[2].second = color[j];
                sort(m, m+3, greater< pair<long long, int> >());
            }
        }
//            ans = 0 ;
        cout << ans << "\n";
    }
    return 0;
}

