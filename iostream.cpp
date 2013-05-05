/*
Sonakshi Nathani <sonakshinathani@gmail.com>
information: 
#tags:  iostream
date: Sun May  5 12:39:56 IST 2013
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    //    string s = "soankshi nathani\n";
    //  cout << s;
    const float factor = 2.54;
    float x, in, cm;
    char ch = 0;
    cout << "enter length: ";
    cin >> x;
    cin >> ch;
    
    switch(ch) {
        case 'i' :
            in = x;
            cm = x*factor;
            break;
        case 'c' :
            in = x/factor;
            cm = x;
            break;
        default:
            in = cm = 0;
            break;
    }
    cout << in << "in = " << cm << " cm \n";
return 0;
}

