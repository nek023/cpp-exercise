#include <iostream>

using namespace std;

int main(void){

	int a, b;
	int pow = 1;

	cout << "2つの整数を入力してください。" << endl;
	cout << "1つ目:";
	cin >> a;
	cout << "2つ目:";
	cin >> b;

	for (int i = 0; i < b; i++){
		pow *= a;
	}

	cout << "結果:" << pow << endl;

	return 0;
}