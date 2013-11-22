#include <iostream>

using namespace std;

int main(void){

	int a, b;
	int pow = 1;

	cout << "2‚Â‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << endl;
	cout << "1‚Â–Ú:";
	cin >> a;
	cout << "2‚Â–Ú:";
	cin >> b;

	for (int i = 0; i < b; i++){
		pow *= a;
	}

	cout << "Œ‹‰Ê:" << pow << endl;

	return 0;
}