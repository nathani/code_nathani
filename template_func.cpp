/*
   Sonakshi Nathani <sonakshinathani@gmail.com>
information: 
#tags: template_func
date: Sun May  5 20:59:37 IST 2013
 */
#include<iostream>
using namespace std;
template <class T>
T GetMax (T a,T b) {
    T result;
    result = (a>b)? a : b;
    return (result);
}

int main() {
    int i=5, j=6, k;
    string l = "sonakshi";
    string m = "sonaksho",n;
    k = GetMax<int>(i,j);
    n = GetMax<string>(l,m);
    cout << k << endl;
    cout << n << endl;
    return 0;
}

