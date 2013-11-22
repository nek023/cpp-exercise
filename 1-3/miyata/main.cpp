#include <iostream>

using namespace std;

#define N 2

int main(void){

	int num[N];
	for(unsigned int i = 0; i < N; i++){
		cout << i << "”Ô–Ú‚Ì”š:";
		cin >> num[i];
	}

	double result = 1; //0æ
	
	for(unsigned int i = 0; i < abs(num[1]); i++)
			result *= num[0];

	if(num[1] < 0)
		result = 1 / result;

	cout << result << endl;

	while(1);
	return 0;
}