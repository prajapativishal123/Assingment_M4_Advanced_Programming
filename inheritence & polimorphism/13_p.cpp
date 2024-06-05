/*13. Write a program to find the max number from given two numbers 
using friend function */
#include<iostream>
using namespace std;
class mex_num
{
	private : 
		int n1,n2;
		friend int meximum(mex_num &m)
		{
			if(m.n1>m.n2)
			{
				cout<<"\n\n\t n1 is big";
			}
			else
			{
				cout<<"\n\n\t n2 is big";
			}	
		}
	public:
	void getdata()
	{
		cout<<"\n\n\t enter any number : ";
		cin>>n1;
		cout<<"\n\n\t enter any number : ";
		cin>>n2;
	}
		
};
main()
{
	mex_num m;
	m.getdata();
	int mex=meximum(m);
	//cout<<"\n\n\t meximum value : "<<mex;
}
