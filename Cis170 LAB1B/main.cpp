// ---------------------------------------------------------------
// Programming Assignment:	LAB1B
// Developer:			Travis Stanfield
// Date Written:			10/27/2020
// Purpose:				Average Program 
// ---------------------------------------------------------------
#include <iostream>

using namespace std;

void main()
{

	cout << "Find the Average Program\n";

	double num1, num2, num3, average;
	cout << "Please enter number 1: ";
		cin >> num1;
		cout << "Please enter number 2: ";
		cin >> num2;
		cout << "Please enter number 3: ";
		cin >> num3;
		average = num1 + num2 + num3 / 3;

	cout << "The average is:  " << average << endl;
	system("pause");



}
