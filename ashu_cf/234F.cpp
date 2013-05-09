/*
Ashutosh Singla <ashu1461@gmail.com>
information: 
#tags: 
date: Thu May  9 15:36:35 IST 2013
*/
#include<iostream>
#include<stdio.h>
using namespace std;
#define floop(a,b,c) for(int a=b;a<c;a++) // floop ^_^
#define min(a,b) (a<b?a:b)
int red[204][40008];
int blue[204][40008];
int main()
{
    freopen("INPUT.TXT","r",stdin);  // easy way to get input from files.
    freopen("OUTPUT.TXT","w",stdout); // easy way to output to files.
    int length,r,b;
    scanf("%d %d %d",&length,&r,&b);
    int A[208];
    int sum[208];
    sum[0]=0;
    floop(i,1,length+1){
        scanf("%d",&A[i]);
        sum[i]= sum[i-1]+ A[i];
//        printf("sum for ith element %d %d\n",i,sum[i]);
    }
    
    floop(i,0,length+1)
        floop(j,0,r+1){
            red[i][j] = blue[i][j] = 1000;
        }

    red[0][0] = 0;
    blue[0][0] = 0;
    // at a particular column i (given that cloumn is either red or blue), find the minimum penalty if the color red used is j
    floop(i,1,length+1)
        floop(j,0,r+1){
            if(sum[i]<=j+b){
            if(A[i]<=j){
                // column i red provided j red color has to be spent .. 
                red[i][j] = min(red[i-1][j-A[i]],min(A[i],A[i-1])+blue[i-1][j-A[i]]);
            }
            //
            blue[i][j] = min(min(A[i],A[i-1])+red[i-1][j],blue[i-1][j]);
        }
        }
    int ans = 1000;
    floop(j,0,r+1){
        ans = min(ans,min(blue[length][j],red[length][j]));
    }
    if(ans==1000)
        cout << "-1";
    else
        cout << ans << "\n";

return 0;
}

