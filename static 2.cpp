#include<iostream>
using namespace std;
class demo
{
	int  number;//non static
	static int count;//static member
	public:
		void get_number()
		{
			number=1;
			number++;
		}
		void get_count()
		{
			count++;
		}
		void display()
		{
			cout<<"\nNumber is=="<<number;
			cout<<"\ncount is=="<<count;
		}
};
int demo::count=0;
main()
{
	demo d1;
	d1.get_number();
	d1.get_count();
	d1.display();
	demo d2;
	d2.get_number();
	d2.get_count();
	d2.display();
}
