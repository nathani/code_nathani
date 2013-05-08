/*
Ashutosh Singla <ashu1461@gmail.com>
information: 
#tags: basics 
date: Sun May  5 18:14:12 IST 2013
*/
#include<iostream>
using namespace std;
template <class T>
T function(T a, T b){
    T result = a+b;
    return (result);
}
int main()
{
    cout << function<int>(1,2) << "\n";
    cout << function<float>(1,2.1) << "\n";
return 0;
}

