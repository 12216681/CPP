// write a program to find the area of a circle,square and a triangleby using the concept of fuction overloading.
// modify the above question by giving the value length and pi as default value
// modify the first question by passing value of the parameter in square as pass by value,the parameters to find the area of the rectangle must be pass by address, the argument for area of circle must be passed by reference
#include<iostream>
using namespace std;
class figure;
{

	private:
		int s,r;
		float c;
	public:	
	
	void area square(int x)
	{
		s=x*x;
		cout<<"\n area of square"<<s;
		}
	void area rectangle(int a,int b)
	{
		r=a*b;
		cout<<"\n area of the rectangle"<<r;
		}	
	void area circle(int d,float pi)
	{
		c=pi*d*d;
		cout<<"\n area of circle"<<c;
		}
};
		
	
	main()
	{
	
	figure(f);
	f.area(2)
	f.area(3,4);
	f.area(2.5,3.14);
	
}

