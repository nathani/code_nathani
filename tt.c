/*
Sonakshi Nathani <sonakshinathani@gmail.com>
information: 
#tags: 
date: Wed May  8 18:49:58 IST 2013
*/
//#include<iostream>
#include<stdio.h>
//using namespace std;
/* Test function default arguments (TestFnDefault.cpp) */
    // Function prototype
    int sum(int n1, int n2, int n3, int n4, int n5);
     
    int main() {
           printf("%d\n",sum(1, 1, 1, 1, 1)); // 5
//              printf("%d\n",sum(1, 1, 1, 1));    // 4
              //   cout << sum(1, 1, 1) << endl;       // 3
               //     cout << sum(1, 1) << endl;          // 2
                    // cout << sum(1) << endl;  // error: too few arguments
return 0;
    }
     
    // Function definition
    // The default values shall be specified in function prototype,
    //   not the function implementation
    int sum(int n1, int n2, int n3, int n4, int n5) {
           return n1 + n2 + n3 + n4 + n5;
    }
