/*
   Sonakshi Nathani <sonakshinathani@gmail.com>
information: 
#tags: brute_force pointers TLE aayi thi isme ! :) 
date: Sat May 11 18:57:57 IST 2013
 */
#include<iostream>
#include<limits.h>
#include<stdlib.h>
using namespace std;
int cal_right_min(char** a,int r,int c){

    int b[r][c];
    int i,j,k;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[i][j]=INT_MAX;
            if(a[i][j]=='1')
                b[i][j]=0;
            else
            {
                for(k=0;k<j;k++)
                {
                    if(a[i][k]=='1')
                    {
                        if(b[i][j] > (c-(j-k)))
                        {
                            b[i][j] = c-(j-k);
                        }
                    }
                }
                for(k=j;k<c;k++)
                {
                    if(a[i][k]=='1')
                    {
                        if(b[i][j] > (k-j))
                        {
                            b[i][j] = k-j;
                        }
                    }
                }
                if(b[i][j] >1)
                {
                    for(k=0;k<j;k++)
                    {
                        if(a[i][k]=='1')
                        {
                            if(b[i][j] > (j-k))
                                b[i][j] = (j-k);
                        }
                    }
                    for(k=j;k<c;k++)
                    {
                        if(a[i][k]=='1')
                        {
                            if(b[i][j] > (c-(k-j)))
                                b[i][j] = (c-(k-j));
                        }
                    }
                }
            }
        }
    }
    int min=INT_MAX;
    for(j=0;j<c;j++)
    {
        for(i=1;i<r;i++)
        {
            b[0][j] = b[0][j] + b[i][j];
        }
        if(b[0][j] < min)
            min = b[0][j];
    }
    if(min == INT_MAX)
        return -1;
    else
        return min;
}
int main()
{
    int r,c,j,i;
    cin >> r >> c;
    char **a;
    a = new char *[r];
    for(i=0;i<r;i++)
        a[i] = new char[c];
    int fl[r],flag=0,flg=0;
    for(i=0;i<r;i++)
    {
        flag=0;
        for(j=0;j<c;j++)
        {
            //   scanf("%d",&a[i][j]);
            cin >> a[i][j];
            if(a[i][j]=='1')
            {
                // fl[i]=1;
                flag=1;

            }
        }
        if(flag==0)
            flg=1;


    }
    if(flg==1)
    {
        //        cout << "hello" << "\n";
        cout << -1 << "\n";
    }
    else
    {
        int result = cal_right_min(a,r,c);
        cout << result << "\n";
    }
    return 0;
}

