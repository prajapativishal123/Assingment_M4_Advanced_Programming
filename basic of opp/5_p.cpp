/*Write a C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables.*/
#include<iostream>
using namespace std;
class person
{
	string name,country;
	int age;
	public: 
		void getdata()
		{
			cout<<"\n\n\t enter name : ";
			cin>>name;
			cout<<"\n\n\t enter age : ";
			cin>>age;
			cout<<"\n\n\t enter country : ";
			cin>>country;
		}
		void printdata()
		{
			cout<<"\n\n\t name : "<<name;
			cout<<"\n\n\t age : "<<age;
			cout<<"\n\n\t country : "<<country;
		}
};

main()
{
	person p;
	p.getdata();
	p.printdata();
}
