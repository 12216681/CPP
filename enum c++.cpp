/*imagine an enumerated type with values that indicate an
employee type within an organization:
enum etype { laborer, secretary, manager, accountant, executive,
researcher };
Write a program that first allows the user to specify a type by entering its first letter
(‘l’, ‘s’, ‘m’, and so on), then stores the type chosen as a value of a variable of type
enum etype, and finally displays the complete word for this type.
Enter employee type (first letter only)
laborer, secretary, manager,
accountant, executive, researcher): a
Employee type is accountant.
You’ll probably need two switch statements: one for input and one for output
*/
#include<iostream>
using namespace std;
enum etype{laborer,secretary,manager,accountant,executive};
int main
