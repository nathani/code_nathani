/*
Ashutosh Singla <ashu1461@gmail.com>
information: 
#tags: basics
date: Sat May  4 10:03:25 IST 2013
*/
#include<iostream>
#include<string>
#include<iterator>
using namespace std;
ostream_iterator<string> oo(cout);
istream_iterator<string> eos;
int main()
{
    *oo = "Some string  ..\n";
istream_iterator<string> ii(cin);
        cout << *ii; 
//  string s1;
return 0;
}

