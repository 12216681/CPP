/*Create a class called time that has separate int member data for hours, minutes, and 
seconds. One constructor should initialize this data to 0, and another should initialize it
to fixed values. Another member function should display it, in 11:59:59 format. The final
member function should add two objects of type time passed as arguments.
A main() program should create two initialized time objects (should they be const?) and
one that isn’t initialized. Then it should add the two initialized values together, leaving the
result in the third time variable. Finally it should display the value of this third variable.
Make appropriate member functions const.*/
#include<iostream>
using namespace std;
class time
{
	int hours;
	int minutes;
	int seconds;
	public:
		time()
		{
			hours=0;
			minutes=0;
			seconds=0;
			
		}
		time(int h,int m,int s)
		{
			hours=h;
			minutes=m;
			seconds=s;
		}
		void display()
		{
			cout<<hours<<":"<<minutes<<":"<<seconds;
		}
		time add(time &a1,time &a2)
		{
			int total_seconds=a1.seconds2
		}
};
main()
{
	time t1(8,42,56);
	time t2(9,23,45);
	time t3;
	t3=t3.add(t1,t2);//object passed as argument to t3
	t3.display();
}
