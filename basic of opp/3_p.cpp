/*4. Write a C++ program to implement a class called Circle that has private 
member variables for radius. Include member functions to calculate the 
circle's area and circumference. */
#include<iostream>
using namespace std;
class circle
{
	float pi;
	int r;
	public:
		float circle_area(float pi,int r)
		{
			return pi*(r*r);
		
		}
		float circumference(float pi,int r)
		{
			return 2*pi*r;
		}
};
main()
{
	circle c;
		float pi=3.14;
		int r=5;
		float area=c.circle_area(pi,r);
		float cir=c.circumference(pi,r);
		cout<<"\n\n\t circle of area : "<<area;
		cout<<"\n\n\t circumference : "<<cir;
}
