#include <iostream>

using namespace std;


void rev_str(char *s1)
{
	const string str = s1;

	unsigned int i;
	for(i = 0; i < str.size(); i++){
		s1[i] = str[str.size()-i-1];
	}
	s1[i] == NULL;
}


void rev_str(const char *s1, char *s2)
{
	const string str = s1;
	
	unsigned int i;
	for(i = 0; i < str.size(); i++){
		s2[i] = str[str.size()-i-1];
	}
	s2[i] = NULL;
}


int main(void){

	char s1[80], s2[80];
	strcpy(s1, "hello");
	rev_str(s1, s2);
	rev_str(s1);

	cout << "s1: " << s1 << ", s2: " << s2 << endl;

	while(1);
	return 0;
}