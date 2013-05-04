/*
Ashutosh Singla <ashu1461@gmail.com>
information: 
#tags: 
date: Sat May  4 12:49:41 IST 2013
*/
int name;
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << name << "\n";
    cout << x << "\n";
    {
        int name =10;
        {
        cout << name << "\n";
        }
    }
return 0;
}

