/*
Sonakshi Nathani <sonakshinathani@gmail.com>
information: 
#tags: oop  class
date: Wed May  8 10:17:09 IST 2013
*/
#include<iostream>
#include<string>
using namespace std;
class Circle {
double radius;
string color;

    public:
Circle(double r = 1.0, string c = "red"){
radius = r ;
color = c;
}
double getRadius(){
return radius;
}

string getColor(){
return color;
}

double getArea() {
return radius*radius*3.1416;

}

};
int main()
{


   Circle c1(1.2,"blue");
cout << "radius=" << c1.getRadius() << " Area " << c1.getArea() << " color " << c1.getColor() << "\n";

return 0;
}

