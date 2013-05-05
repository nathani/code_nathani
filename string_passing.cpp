/*
Sonakshi Nathani <sonakshinathani@gmail.com>
information: 
#tags:  string_arguments
date: Sun May  5 13:45:56 IST 2013
*/
#include<iostream>
#include<string>
using namespace std;
//if we send a string variable we use can (string& s1);
// but if we send a string then we have to give argument as follows:: (string s1);
void string_func(string& s1,string& s2)
{
    s1 = s1 + s2;
    cout << s1;
}
int main()
{
    string s = "sonakshi";
    string ss = "nathani";
    string_func(s,ss);
return 0;
}

