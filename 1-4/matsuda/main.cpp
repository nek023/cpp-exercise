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
	// 文字列をコピー
	string rev_str = str;
	// 値を後ろから順に見ていき，それを前から更新する
	for(int i = 0; i < (int)str.length(); i++)
		rev_str[i] = str[str.length() - i - 1];
	return rev_str;
}

void rev_str(const string& str1, string& str2)
{
	str2 = rev_str(str1);
}
