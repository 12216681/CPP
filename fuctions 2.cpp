/*Define a class named GroceryItem. Include private fields that hold an item’s stock 
 number, price, quantity in stock, and total value. Write a public function named 
 dataEntry()that calls four private functions. Three of the private functions prompt 
 the user for keyboard input for a value for one of the data fields stock number, price, 
 and quantity in stock. The function that sets the stock number requires the user to 
 enter a value between 1000 and 9999 inclusive; continue to prompt the user until a 
 valid stock number is entered. The functions that set the price and quantity in stock 
 require non-negative values; continue to prompt the user until valid values are entered. 
 Include a fourth private function that calculates the GroceryItem’s total value field 
 (price times quantity in stock). Write a public function that displays a GroceryItem’s 
 values. Finally, write a main()function that declares a GroceryItem object, assigns 
 values to its fields, and uses the display function. Save the file as Grocery.cpp.*/
#include<iostream>
 using namespace std;
 class GroceryItem
 {
 	private:
 		int stock number;int price;int quantity in stock;int total value;
		 void stock()
		 {
		 	cin>>stock;
		  } 
		 void Price()
		 {
		 	cin>>price;
		 }
		 void Quantity in stock()
		 {
		 	cin>>quantity in stock; 
		 }
		 void total value()
		 {
		 	value=price*quantity in stock;
		 }
		 
		 
 }
