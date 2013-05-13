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
template <class T>
void test_for( T a)
{
    cout << a;
}

int main() {
<<<<<<< HEAD
int i=5, j=6, k;
string l = "sonakshi";
string m = "sonaksho",n;
k = GetMax<int>(i,j);
n = GetMax<string>(l,m);
int y =1;
test_for<int>(y);
cout << k << endl;
cout << n << endl;
return 0;
=======
    int i=5, j=6, k;
    string l = "sonakshi";
    string m = "sonaksho",n;
    k = GetMax<int>(i,j);
    n = GetMax<string>(l,m);
    cout << k << endl;
    cout << n << endl;
    return 0;
>>>>>>> 7bf018944ecb56a62cb61a170c3c00b0a1e01086
}

