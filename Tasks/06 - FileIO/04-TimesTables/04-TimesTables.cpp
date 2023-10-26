#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream a;
	a.open("tables.txt");

	if (a.is_open() == false) {
		cerr << "Cannot create file" << endl;
		return -1;
	}
	
	
	for (unsigned int r = 2; r <= 12; r++) {
		for (unsigned int c = 2; c <= 12; c++) {
			a << r * c << "\t";
		}
		a << endl;
	}
	a << endl;

	return 0;
}