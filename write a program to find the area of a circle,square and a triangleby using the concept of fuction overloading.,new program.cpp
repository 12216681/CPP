//write a program to find the area of a circle,square and a triangleby using the concept of fuction overloading.
#include<iostream>
using namespace std;
class figure
{
	int length,breadth,side;
	double radius,pi;
	public:
		void area(int s)
		{
			side=s;
			int ar=side*side;
			cout<<"\nArea of sqaure"<<ar;
		}
		void area(int l,int b)
		{
			length=l;
			breadth=b;
			int ar=length*breadth;
			cout<<"\narea of rectangle"<<ar;
		}
		void area(double r,double p)
		{
			radius=r;
			pi=p;
			double ar=pi*r*r;
			cout<<"\narea of circle"<<ar;
		}
};
main()
{
	figure f1,f2;
	f1.area(3);
	f1.area(3,4);
	f1.area(6.2,3.14);
//	int si,le,br,ra,pi;
//	cin>>le>>br>>ra>>pi;
//	f2.area(si);
	}
