#include "point.h"
#include<iostream>
using namespace std;
 
Point::Point(){
    x=10;
    y=10;
}
int Point::read(int xx,int yy)
{
    x=xx;
    y=yy;
}
void Point::print()
{
    cout<<x+10<<":"<<y+10<<endl;
}
