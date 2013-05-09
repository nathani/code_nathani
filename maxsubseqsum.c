/*
Sonakshi Nathani <sonakshinathani@gmail.com>
information: 
#tags: o(nlogn) 
date: Thu May  9 04:28:11 IST 2013
*/
#include<stdio.h>
int max(int a,int b,int c)
{
int r = a > b ? a :b;
    r = c >r ? c : r ;
return r;
}

int maxsubsum(const int* a,int left, int right)
{
    int maxleftsum,maxrightsum,max_lb,max_rb,center,lb,rb,i;
    /* lb : left border sum, rb : right borber sum */

// base case
    if(left == right)
        if( a[left] > 0)
            return a[left];
        else
            return 0;

center = (left + right )/2;
maxleftsum = maxsubsum(a,left,center);
maxrightsum = maxsubsum(a,center+1,right);
max_lb =0,max_rb =0,rb =0,lb =0;
for(i= center;i>=left;i--)
{
    lb = lb + a[i];
    if(lb > max_lb)
        max_lb = lb;
}
for(i= center+1;i<=right;i++)
{
    rb = rb + a[i];
    if(rb > max_rb)
        max_rb = rb;
}
return max(maxleftsum,maxrightsum,max_lb+max_rb);

}
int main()
{
int n;
scanf("%d",&n);
int a[n];
/*a[0] = 1;
a[1] = 2;
a[2] = 3;
*/
int i;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("%d\n",maxsubsum(a,0,n-1));
return 0;
}

