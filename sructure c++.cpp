/*A phone number, such as (212) 767-8900,
can be thought of as having three parts: the
area code (212), the exchange (767), and the number (8900).
Write a program that uses a structure to store these three parts
of a phone number separately. Call the structure
phone. Create two structure variables of type phone.
Initialize one, and have the user
input a number for the other one.
Then display both numbers. The interchange might
look like this:
Enter your area code, exchange, and number: 415 555 1212
My number is (212) 767-8900
Your number is (415) 555-1212*/
#include<iostream>
using namespace std;
struct phone{
		int area_code;
		int exchange;
		int number;
	};
main()
{
	phone x,y;
	x.area_code=212;
	x.exchange=767;
	x.number=8900;
	cout<<"enter area code";
	cin>>y.area_code;
	cout<<"enter exchange";
	cin>>y.exchange;
	cout<<"enter number";
	cin>>y.number;
	
	cout<<"my phone number is :"<<x.area_code<<x.exchange<<"-"<<x.number;
	cout<<"\nyours phone number is : "<<y.area_code<<y.exchange<<"-"<<y.number;
	
	
}
