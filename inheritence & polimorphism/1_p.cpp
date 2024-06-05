/*1. Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)*/
#include<iostream>
using namespace std;
class cricketer
{
	public:
	int run,inning,avg_run,avg;
	public:
		void getinfo()
		{
			avg=0;
			cout<<"\n\n\t enter run : ";
			cin>>run;
			cout<<"\n\n\t enter how many inning played by cricketer : ";
			cin>>inning;
			avg=run/inning;
			
		}
};
class batsman : public cricketer
{
	public:
	void printinfo()
	{
		cout<<"\n\n\t run : "<<run;
		cout<<"\n\n\t average run : "<<avg; 
	}
	
};
main()
{
	batsman B;
	B.getinfo();
	B.printinfo();
}
