#include <iostream>
#include <string.h>

using namespace std;

void rev_str(char* s1);
void rev_str(char* s1, char* s2);

int main(void){

	char s1[80], s2[80];
	strcpy_s(s1, "hello");
	rev_str(s1, s2);
	rev_str(s1);

	return 0;
}

void rev_str(char* s1){

	cout << "“ü—Í:" << s1 << endl;
	
	int l = strlen(s1);
	char tmp;

	for (int i = 0; i < l / 2; i++){
		tmp = s1[i];
		s1[i] = s1[l - i - 1];
		s1[l - i - 1] = tmp;
	}

	cout << "o—Í:" << s1 << endl;

}

void rev_str(char* s1, char* s2){

	int l = strlen(s1);

	for (int i = 0; i < l; i++){
		s2[l - i - 1] = s1[i];
	}
	s2[l] = '\0';

	cout << "“ü—Í:" << s1 << endl;
	cout << "o—Í:" << s2 << endl;

}