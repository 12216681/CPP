#include<iostream>
using namespace std;
void passbyvalue(int ,int);
void passbyaddress(int *,int *);
void passbyreference(int &,int &);
main()
{
	int a=10,b=20;
	cout<<"\nbefore function call"<<endl;
	cout<<"a= "<<a<<" and b= "<<b;
	//passbyvalue(a,b);
//	passbyaddress(&a,&b);
passbyreference(a,b);
	cout<<"\nafter function call"<<endl;
	cout<<"a= "<<a<<" and b= "<<b;
}
void passbyvalue(int x,int y)
{
	x++;//11
	y++;//21
		cout<<"x= "<<x<<" and y= "<<y
		;
}
void passbyaddress(int *x,int *y)
{
	*x++;
	*y++;
	cout<<"x= "<<*x<<" and y= "<<*y;
}
void passbyreference(int &x,int &y)
{
	x++;
	y++;
	cout<<"x= "<<x<<" and y= "<<y;
}
