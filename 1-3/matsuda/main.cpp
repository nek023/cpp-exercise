#include <iostream>
using namespace std;

void main(void)
{
	int integer1, integer2;
	cout << "Type in two integeres" << endl;
	cout << "1: ";
	cin >> integer1;
	cout << "2: ";
	cin >> integer2;
	
	int result = 1;
	for(int i = 0; i < integer2; i++)
		result *= integer1;

	cout << integer1 << "^" << integer2 << " = " << result << endl;
}