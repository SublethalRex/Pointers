// Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>



using namespace std;

int* pnum;
string* pstr;


int num = 5;
string str = "Hi";

int choice;



int normal() { //displays the pointers as they currently are in the program
	cout << "Normal string says " << str << "\n\n";
	cout << "pointer string says " << *pstr << "\n\n";
	cout << "Normal int says " << num << "\n\n";
	cout << "pointer int says " << *pnum << "\n\n";
	return 0;
}



int changed() { //allows editing of the normal int and str to effect the pointer
	
	cout << "What would you like the string and its pointer to say now?\n";
	cin >> str;
	cout << "What number would you like the int and its pointer to say now?\n\n";
	cin >> num;
	return 0;
}

int choose(){ //menu to choose what you would like to do with the pointers
	
	while (true) {

		cout << "Welcome to pointers\n\n";
		cout << "Select fucntion you want to execute:\n ";
		cout << "1 - Run pointers as they are now\n";
		cout << "2 - Edit the pointers\n";
		cin >> choice;
		switch (choice)//switch to handle what you want to do in the program
		{
		case 1:
			normal();
			break;
		case 2:
			changed();
			break;

		default:
			break;
		}

	}


}

int main() //main function
{
	pstr = &str;
	pnum = &num;
	choose();

	return 0;
}