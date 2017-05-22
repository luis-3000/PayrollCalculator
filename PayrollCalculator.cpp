// PayrollCalculator.cpp
// This program stores, in two vectors, the hours worked by 
// employees, and their hourly pay rates.
// Author: Jose Luis Castillo
// Date Sunday, May 21, 2017

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
using namespace std;

int main() 
{
	int numEmployees;
	vector<int> hours; // A vector of integers
	vector<double> payRate; // A vector of doubles
	int index;

	// Get the number of employees
	cout << "How many employees do you have? ";
	cin >> numEmployees;

	// input the payroll data
	cout << "Enter the hours worked by " << numEmployees;
	cout << " employees and their hourly rates.\n";
	for (index = 0; index < numEmployees; index++)
	{
		int tempHours; // to hold the number of hours entered
		double tempRate; // to hold the payrate entered

		cout << "Hours worked by employee #" << (index + 1);
		cout << ": ";
		cin >> tempHours;
		hours.push_back(tempHours); // Add an element to hours
		cout << "Hourly pay rate for employee #";
		cout << (index + 1) << ": ";
		cin >> tempRate;
		payRate.push_back(tempRate); // Add an element to payRates

	}

	// Display each employee's gross pay.
	cout << "\nHere is the gross pay for each employee:\n";
	cout << fixed << showpoint << setprecision(2);

	for (index = 0; index < numEmployees; index++)
	{
		double grossPay = hours[index] * payRate[index];
		cout << "Employee #" << (index + 1);
		cout << ": $" << grossPay << endl;
	}
	return 0;
}