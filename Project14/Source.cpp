//Luke Scholler
//CIS 1202
//April 30, 2023

#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<cstring>

using namespace std;

int main() {

	//Luke Scholler
//CIS 1202
//April 2, 2023

#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<cstring>

char character(char, int);

using namespace std;

	system("pause");
	return 0;
}

char character(char start, int offset) {
	if (!isalpha(start)) {
		throw "Error: invalid character";
	}
	else {
		return start + 1;
	}
}