/*
Ashutosh Singla <ashu1461@gmail.com>
information: templates save code ..  
#tags: basics 
date: Sun May  5 18:35:41 IST 2013
*/
#include<iostream>
using namespace std;
/*
void function1(int& a){
    a = a + 5;
    
}
void function2(int a){
    a = a + 5;
}
*/
template <class T>
void function(T a){
    a = a + 5;

}
int main()
{
    int a = 10;
    function<int >(a);
    cout << a << "\n";
    function<int& >(a);
    cout << a << "\n";
//    function<const int >(a); this gives an error ..
//    cout << a << "\n";

return 0;
}

