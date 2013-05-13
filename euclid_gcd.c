/*
Sonakshi Nathani <sonakshinathani@gmail.com>
information: 
#tags: GCD USING EUCLID ALGO
date: Thu May  9 16:02:01 IST 2013
*/
#include<stdio.h>
/* actual euclid algo: Euclid's algorithm starts with a pair of positive integers and forms a new pair that consists of the smaller number and the difference between the larger and smaller numbers. The process repeats until the numbers are equal. That number then is the greatest common divisor of the original pair. But we would deal with it using remainder wala method as it wld be gur for large numbers*/
void gcd(int a,int b)
{
    int divisor=b;
    while(divisor!=0)
    {

        divisor = a%b;
        a = b;
        b = divisor;
    }
    printf("%d\n",a);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    gcd(a,b);
return 0;
}

