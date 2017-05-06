//============================================================================
// Name        : variables.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int number_cats=5;
	int number_dogs=10;
	cout <<"Number of Cats: "<< number_cats <<endl;
	cout <<"Number od dogs: "<<number_dogs <<endl;
	cout <<"Total number of animals: "<< number_cats+number_dogs<<endl;
	number_dogs=number_dogs+1;
	cout <<"Number of new dogs: "<<number_dogs<<endl;

	return 0;
}
