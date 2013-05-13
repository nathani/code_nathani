/*
   Sonakshi Nathani <sonakshinathani@gmail.com>
information: 
#tags: brute_force pointers 
date: Sat May 11 18:57:57 IST 2013
 */
#include<iostream>
#include<limits.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int r,c,j,i,h;
    cin >> r >> c;
    int b[100][10000],k,temp;
    string a[10000];
    for(i=0;i<r;i++)
    {
        cin >> a[i];
        //cout << a[i];
        unsigned found = a[i].find('1');
        if(found==string::npos)
        {
            cout << -1 << "\n";
            return 0;
        }
        h = found+c;
        for(k=found;k <h;k++)
        {
            if(a[i][k%c]=='1')
            {
                b[i][k%c]=0;
                temp=0;
            }
            else
            {
                temp = temp +1;
                b[i][k%c]=temp;
            }


        }
        for(k=c;k>0;k--)
        {
            if(a[i][(k+found)%c] == '1')
            {
                temp = 0;
                b[i][(k+found)%c] = temp ;

            }
            else
            {
                temp = temp + 1;
                b[i][(k+found)%c] = (temp<b[i][(k+found)%c] ? temp : b[i][(k+found)%c]);
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
    //    if(min == INT_MAX)
    //      return -1;
    //  else
    cout << min << "\n";




    //        int result = cal_right_min(a,r,c);
    //      cout << result << "\n";

    // int i,j,k;
    // for(i=0;i<r;i++)
    // {


    return 0;
}

