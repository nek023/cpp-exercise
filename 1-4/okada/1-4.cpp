#include <string>
#include <iostream>

using namespace std;

#define	SIZE 128;

void rev_str(char *s1);
void rev_str(char *s1, char *s2);

int main(void)
{
	char s1[128]="hello";
	char s2[128];
	//strcpy(s1, "hello");

	rev_str(s1, s2);
	cout<<"s2: "<<s2<<endl;
	rev_str(s1);
	cout<<"s1: "<<s1<<endl;
	return 0;
}

void rev_str(char *s1)
{
	char tmp[128];
	tmp[strlen(s1)-1]='\n';
	for(int i=0;i<strlen(s1);i++){
		tmp[strlen(s1)-i-1]=s1[i];
	}
	cout<<tmp<<endl;
	strcpy(s1, tmp);
}

void rev_str(char *s1, char *s2)
{
	tmp[strlen(s1)-1]='\n';
	for(int i=0;i<strlen(s1);i++){
		s2[strlen(s1)-i]=s1[i];
	}
}