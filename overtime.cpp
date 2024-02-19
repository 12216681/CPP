//Write a program in which you declare variables that will hold an hourly wage and
//number of hours worked. Prompt the user to enter values for hourly rate and hours
//worked. Compute and display gross weekly pay, which is calculated as hours times rate
//for the first 40 hours, plus hours times 1.5 times the rate for any hours over 40. Also display net pay, which is gross pay minus withholding; withholding is calculated as 28 percent
//of gross pay if gross pay is over $1000, 21% of gross pay if gross pay is not over $1000
//but is over $600, and 10% of gross pay if gross pay is not over $600. Save the file as
//OvertimeAndNet.cpp.
#include<conio.h>
#include<iostream>
using namespace std;
main()
{
	int hourly_wage,total_hours,weekly_pay,gross_pay,withholding;
	cout<<"enter the hourly wage";
	cin>>"enter the total hours worked ";
	int x=40*hourly_wage;
	int y=(total_hours-40)*hourly_wage*1.5;
	weekly_pay=x+y;
	if(weekly_pay>$1000)
	{
		witholding = weekly_pay*0.28;
		gross_pay=weekly_pay-witholding;
	}
	else if (weekly_pay<1000 && weekly_pay>=600)
	{
		withholding=weekly_pay*0.21;
        gross_pay=weekly_pay-withholding;
		}
    else
    {
        withholding=weekly_pay*0.10;
        gross_pay=weekly_pay-withholding;
    }
cout<<"\nGRoss pay is"<<gross_pay;


}
	}
	
}
