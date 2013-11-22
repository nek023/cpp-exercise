#include<stdio.h>
#include<iostream>


using namespace std;

//ŠÖ”éŒ¾
void rev_str(char *_str);
void rev_str(char *_str , char *_str2);

int main(int argc , char** argv){

	char s1[80] , s2[80];
	strcpy(s1 , "hello world!\nhello c++!!");

	//Œ³‚Ì•¶š—ñ
	cout<<"s1:"<<endl;
	cout<<s1<<endl;
	
	//ŠÖ”‚P ‚½‚¾‚Ğ‚Á‚­‚è•Ô‚·
	rev_str(s1);
	cout<<"s1:"<<endl;	
	cout<<s1<<endl;

	//ŠÖ”2 	
	rev_str(s1 , s2);
	cout<<"s1:"<<endl;	
	cout<<s1<<endl;
	cout<<"s2:"<<endl;	
	cout<<s2<<endl;




}


//•¶š—ñ”½“]ŠÖ”
void rev_str(char *_s1){
	
	//•¶š”ƒJƒEƒ“ƒg
	int num = 0;
	while(_s1[num] != 0){
		num++;
	}
	//cout<<"num:"<<num<<endl;

	//•¶š—ñ”½“]
	char tmpStr[1];
	for(int i = 0 ; i < num/2 ; i++){
		tmpStr[0] = _s1[num - i -1];
		_s1[num - i - 1] = _s1[i];
		_s1[i] = tmpStr[0];
	}


}


//•¶š—ñ”½“]ŠÖ”
void rev_str(char *_s1 , char *_s2){
	
	//•¶š”ƒJƒEƒ“ƒg
	int num = 0;
	while(_s1[num] != 0){
		num++;
	}
	//cout<<"num:"<<num<<endl;

	//”½“]
	for(int i = 0 ; i < num ; i++){
		_s2[i] = _s1[num - i - 1];
	}
	_s2[num] = _s1[num];

}



