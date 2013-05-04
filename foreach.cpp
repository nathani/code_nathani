/*
Ashutosh Singla <ashu1461@gmail.com>
information: 
#tags: basics 
date: Sat May  4 11:12:14 IST 2013
*/
#include<iostream>
#include<iterator>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
map <string,int> histogram;
void record(const string& s){
    histogram[s] ++;
//    cout << s << histogram[s];
}
void print(const pair<const string,int> &r){
    cout << r.first << ' '<< r.second << '\n';
}
int main()
{
    istream_iterator<string> ii(cin);
    istream_iterator<string> eos;
    for_each(ii,eos,record);
    for_each(histogram.begin(),histogram.end(),print);

return 0;
}

