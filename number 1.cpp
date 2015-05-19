 /*
* Question1.cpp
*
* Name:  [ Christopher Akuma Nnanna ]
* Department: [ Computer science ]
matric / reg.number [ 4060030JG]
* A Program that reads two integers and determines;
* if the two integer is odd or even
*
* sub file to enable you complete assignment#1-question 1
*/
#include <iostream>
using namespace std;

  int number1$;
  int number2$;
  
int main ()
{
    
	int number1;
	
	std:: cout << "Welcome  This program Reads An Interger" <<endl;
	std:: cout << "and Determines and prints if its even or odd" <<endl;
	std:: cout << "" << endl;
	
    cout <<"Enter Number: ";
	cin >>number1;
	int number2 = number1;
	
	if (number1 % 2 == 0)
	cout << number1 << "it is an even number";
	
    else
	cout << number1 << " is an odd number";
	return 0;
}
