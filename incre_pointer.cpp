/*
Sonakshi Nathani <sonakshinathani@gmail.com>
information: 
#tags: 
date: Mon May  6 15:18:23 IST 2013
*/
#include<iostream>
using namespace std;
void incr(int* p) {
(*p)++;
}
int main()
{
    int x = 1;
    //increment(x);
    incr(&x);
    cout << x << '\n';
return 0;
}

