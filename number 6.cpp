 /*
* Question1.cpp
*
* Name:  [ Christopher Akuma Nnanna ]
* Department: [ Computer science ]
matric / reg.number [ 4060030JG]
* A calculate application that reads the user's weight in kilogram and height in metres, calculate and display the user's body mas index. and display on informat

tub file to enable you complete assignment# -question#6
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int weight;
	int height;
	int BMI;
	cout << "Enter your weight(kg): " <<endl;
	cin >> weight;
	
	cout << "Enter your height(m): " <<endl;
	cin >> height;
	
	BMI = weight / pow(height , 2);
	
	cout << setprecision(2) << fixed << "Your BMI is: " <<BMI <<endl;
	
	if (BMI <= 18.5)
	cout << "You are under-weight." <<endl;
	else
	if ((BMI > 18.5) && (BMI < 24.9))
	cout << "Your weight is in the normal range. =)" <<endl;
	else
	if ((BMI > 25) && (BMI < 29.9))
	cout << "You are over-weight." <<endl;
	else
	cout << "You are Obese." <<endl;

	return 0;	
}
