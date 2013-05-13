/*
Sonakshi Nathani <sonakshinathani@gmail.com>
information: fibonacci recursive solution
#tags: fibonacci
date: Thu May  9 00:49:01 IST 2013
*/
#include<iostream>
using namespace std;
int fib(int n){
    return (n<2) ? n : fib(n-1)+fib(n-2);
}
int main()
{
    int i;
    cout << "Enter the no ... ";
    cin >> i;
    cout << fib(i) << "\n";
return 0;
}

