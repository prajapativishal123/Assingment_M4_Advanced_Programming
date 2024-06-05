/*Write a program to swap the two numbers using friend
functionwithout using third variable*/
#include<iostream>
using namespace std;
class swap_number
{  		
 private :
	 			int a;
    			int b;
    	friend int swaaaping ( swap_number &s)
		{
			s.a=s.a+s.b;
			s.b=s.a-s.b;
			s.a=s.a-s.b;
		}
			public :
        	void getdata()
        	{
        		cout << "\n\n\tEnter numbers 1: ";
    			cin >> a;
  				cout << "\n\n\tEnter numbers 2: ";
    			cin >> b;
    		}
			void printdata()
			{
				cout << "\n\n\t swapping number 1: " <<a;
  				cout << "\n\n\t swapping number 2: "<<b;
			}
			
};
main()
{	
	swap_number s;
	s.getdata();
	cout << "\n\n\t before swapping";
	s.printdata();
	swaaaping(s);
	cout << "\n\n\t after swapping";
	s.printdata();
}
