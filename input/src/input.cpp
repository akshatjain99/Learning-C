//============================================================================
// Name        : input.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout <<"Enter you name: " << flush;
	string input;
	cin >> input;
	cout << "You entered: " <<input<<endl;

	int value;
	cout <<"Please enter a number: "<< flush;
	cin >>value;
	cout <<"You entered: " << value<<endl;

	return 0;
}
