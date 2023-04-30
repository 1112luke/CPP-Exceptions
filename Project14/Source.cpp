//Luke Scholler
//CIS 1202
//April 30, 2023

#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<cstring>

#include "exceptions.h";

using namespace std;

char character(char, int);

int main() {
	char ch = '2';
	int amount = 3;
	
	try {
		char output = character(ch, amount);
		cout << output << endl;
	}
	catch (invalidCharacterException noice) {
		cout << "Error: invalid Character Exception" << endl;
	}
	catch (invalidRangeException) {
		cout << "Error: invalid Range Exception" << endl;
	}

	system("pause");
	return 0;
}

char character(char start, int offset) {
	char target = start + offset;
	//check if start is character
	if (!isalpha(start)) {
		throw invalidCharacterException();
	}
	//check if target is character
	else if (!isalpha(target)) {
		throw invalidRangeException();
	}
	else {
		return target;
	}
}

