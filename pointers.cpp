/*
Ashutosh Singla <ashu1461@gmail.com>
information: 
#tags: basics 
date: Sat May  4 15:10:06 IST 2013
*/
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int A[4] = {1,2,3,4};
    int *p = A;
    cout << *p;
    p = p +1 ;
    cout << *p;
    p = A + 2;
    cout << *p;
    p = p-1;
    cout << *p;
return 0;
}

