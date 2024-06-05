/*5. Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter. */
#include<iostream>
using namespace std;
class rectangle
{
	int w,l;
	public:
		void getdata()
		{
			cout<<"\n\n\t enter width : ";
			cin>>w;
			cout<<"\n\n\t enter length : ";
			cin>>l;
		}
		void print()
		{
			cout<<"\n\n\t rectangle's area : "<<w*l;
			cout<<"\n\n\t perimeter : "<<2*(w*l);
		}
};

main()
{
	rectangle r;
	r.getdata();
	r.print();
}
