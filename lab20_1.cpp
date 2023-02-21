#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2){
	double upperY = min(r1.y,r2.y);
	r1.y -= r1.h;
	r2.y -= r2.h;
	double lowerY = max(r1.y,r2.y);

	double leftX = max(r1.x,r2.x);
	r1.x += r1.w;
	r2.x += r2.w;
	double rightX = min(r1.x,r2.x);

	double wigth = rightX - leftX;
	double hight = upperY - lowerY;

	double area = hight*wigth; 
	

	if (area<=0) return area = 0;
	return area;

}
