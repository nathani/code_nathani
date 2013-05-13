/*
Sonakshi Nathani <sonakshinathani@gmail.com>
information: 
#tags: log(n) integers raise to integer 
date: Thu May  9 22:30:21 IST 2013
*/
#include<stdio.h>
int power(int x,int n)
{
    if( n == 0)
        return 1;
    else if( n%2 != 0)
        return power( x*x,n/2) * x;
    else if (n%2 ==0 )
        return power(x*x,n/2);
}
int main()
{
    int x,n;
    scanf("%d %d",&x,&n);
    int result = power(x,n);
    printf("%d\n",result);
return 0;
}

