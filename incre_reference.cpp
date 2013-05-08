/*
Sonakshi Nathani <sonakshinathani@gmail.com>
information: 
#tags: References use for incrementing 
date: Mon May  6 15:34:22 IST 2013
*/
// remember in graphics assignment we used to think how the value are getting changed when passed through any function's argument. actually the references were passed in that case ! :)
#include<iostream>
using namespace std;
void increment(int& a){
    a++;
}
int main()
{
    int x=1;
    increment(x);
    cout << x << '\n';
return 0;
}

