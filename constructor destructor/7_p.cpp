/*7. Write a C++ program to implement a class called Date that has private 
member variables for day, month, and year. Include member functions to 
set and get these variables, as well as to validate if the date is valid.*/

#include<iostream>
using namespace std;

class date
{
	int day,month,year;
	public:
		date()
		{
			cout<<"\n\n\t day : ";
			cin>>day;
			cout<<"\n\n\t month : ";
			cin>>month;
			cout<<"\n\n\t year : ";
			cin>>year;
		}
		void printinfo()
		{
			cout<<"\n\n\t"<<day;
			cout<<":"<<month;
			cout<<":"<<year;
			if(day<32)
			{
				if(month<13)
				{
					cout<<"\n\n\t your date is valid.";
				}
				else
				{
					cout<<"\n\n\t your date is not valid.";	
				}
			}
			else
			{
				cout<<"\n\n\t your date is not valid.";
			}
		}
};
main()
{
	date D;
	D.printinfo();
}

