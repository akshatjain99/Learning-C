//============================================================================
// Name        : if.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string password="abc";
	cout <<"Enter password: " << flush;
	string input;
	cin >> input;

	if(input==password){
		cout << " Congratulations, password is right" << endl;
	}
	else{
		cout <<"Password is incorrect" << endl;
	}


	return 0;
}
