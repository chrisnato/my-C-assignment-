 /*
* Question2.cpp
*
* Name:  [ Christopher Akuma Nnanna ]
* Department: [ Computer science ]
matric / reg.number [ 4060030JG]
* A Program that reads two integers and determines;
* if the first is a multiple of second
*
* sub file to enable you complete assignment#1-question 2
*/
#include <iostream>
using namespace std;
int main()
{
	int firstnumber;
	int secondnumber;
	int thirdnumber;
	
	cout <<"enter a number ";
	cin >> firstnumber;
	
	cout <<"enter a second number: ";
	cin >> secondnumber;
	
	thirdnumber = firstnumber / secondnumber;
	if (firstnumber % secondnumber == 0)
	cout << firstnumber <<" is a multiple of " << secondnumber;
	
	else
	cout << firstnumber << "is not a multiple of"<< secondnumber;
	
	return 0;
}
	
	
	

