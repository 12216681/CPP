//Write an application that sums the integers from 1 to 50 (that is, 1 + 2 + 3 . . . + 50) and 
//displays the result. Save the file as Sum50.cpp
#include<iostream>
using namespace std;
main()
{
   int sum=0;
   for(int i=1;i<=50;i++)
{
   sum+=i;
}
   cout<<"\n sum is "<<sum;
}
