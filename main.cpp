// Day 2 Projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <Windows.h>
//You need to modify this program to do the following steps
//1. Depending on their choice ask for coressponding values and print them out(almost done for you)
//1 b.See if you can change the if statements to a switch case
//2. Put entire structure in a loop that runs until I press q
//3. Make sure it checks for bad values(-ve numbers, words ? )
//4. Add perimeter calculations as separate choices
//*

using namespace std;

int main()
{
	int length;
	int breadth;

	int lengthsquare;

	float radius;

	cout << "1. Rectangle area" << endl;
	cout << "2. Square area" << endl;
	cout << "3. Circle area" << endl;
	cout << "What is your choice?" << endl;
	char choice;
	cin >> choice;
	while (choice != 'q'){
		switch (choice)
		{
		case '1':
			cout << "What length?: ";
			cin >> length;
			cout << "What breadth?: ";
			cin >> breadth;
			cout << length * breadth << endl;
			break;
		case '2':
			cout << "What length?: ";
			cin >> lengthsquare;
			cout << endl << lengthsquare * lengthsquare << endl;
			break;
		case '3':
			cout << "What is the radius?:";
			cin >> radius;
			cout << endl << 3.14 * (radius*radius) << endl;
			break;

		default:
			cout << "I don't understand.\n";

		}
		cout << "1. Rectangle area" << endl;
		cout << "2. Square area" << endl;
		cout << "3. Circle area" << endl;
		cout << "What is your choice?" << endl;
		cin >> choice;
	}

	system("PAUSE");
	return 0;
}

