#include <iostream>

using namespace std;

int main(void){

	int a, b;
	int pow = 1;

	cout << "2�̐�������͂��Ă��������B" << endl;
	cout << "1��:";
	cin >> a;
	cout << "2��:";
	cin >> b;

	for (int i = 0; i < b; i++){
		pow *= a;
	}

	cout << "����:" << pow << endl;

	return 0;
}