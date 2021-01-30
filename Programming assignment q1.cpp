// Programming assignment q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// A simple program to calculate how much money a customer spends on reading Wikipedia and watching Netflix using internet. 
// Each Mbps for Wikipedia costs 10 pence (p) and for Netflix is 5 p.

#include <iostream>

using namespace std;

int main()
{
	float total, wikipedia, netflix;

	cout << "How many megabytes of Wikipedia? ";
	cin >> wikipedia;

	cout << "How many megabytes of Netflix? ";
	cin >> netflix;

	total = ((wikipedia * 0.1) + (netflix * 0.05));

	cout << "Total spent = $" << total << endl;

	if (total > 50) {

		cout << "You spent too much on internet" << endl;

	}

	if (netflix > wikipedia) {

		cout << "You watch many movies";
	}

	return 0;
}
