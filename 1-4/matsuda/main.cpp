#include <iostream>
#include <string>
using namespace std;

string rev_str(const string& str);
void rev_str(const string& str1, string& str2);


void main(void)
{
	cout << rev_str("aiueo") << endl;
	scanf_s("%d");
}

string rev_str(const string& str)
{
	// ��������R�s�[
	string rev_str = str;
	// �l����납�珇�Ɍ��Ă����C�����O����X�V����
	for(int i = 0; i < (int)str.length(); i++)
		rev_str[i] = str[str.length() - i - 1];
	return rev_str;
}

void rev_str(const string& str1, string& str2)
{
	str2 = rev_str(str1);
}
