#include<iostream>
using namespace std;

void rev_str(char* str){
	char a;
	int n=strlen(str);
	for(int i=0;i<n/2;i++){
		a=str[i];
		str[i]=str[n-1-i];
		str[n-1-i]=a;
	}
}

void rev_str(const char* str,char* str1){
	strcpy(str1,str);
	rev_str(str1);
}


int main()
{
	char s1[80],s2[80];
	strcpy(s1,"hellok");
	rev_str(s1,s2);
	rev_str(s1);

	cout<<"s1:"<<s1<<"\n";
	cout<<"s2:"<<s2<<"\n";

	return 0;
}