#include<stdio.h>
#include<iostream>


using namespace std;

//�֐��錾
void rev_str(char *_str);
void rev_str(char *_str , char *_str2);

int main(int argc , char** argv){

	char s1[80] , s2[80];
	strcpy(s1 , "hello world!\nhello c++!!");

	//���̕�����
	cout<<"s1:"<<endl;
	cout<<s1<<endl;
	
	//�֐��P �����Ђ�����Ԃ�
	rev_str(s1);
	cout<<"s1:"<<endl;	
	cout<<s1<<endl;

	//�֐�2 	
	rev_str(s1 , s2);
	cout<<"s1:"<<endl;	
	cout<<s1<<endl;
	cout<<"s2:"<<endl;	
	cout<<s2<<endl;




}


//�����񔽓]�֐�
void rev_str(char *_s1){
	
	//�������J�E���g
	int num = 0;
	while(_s1[num] != 0){
		num++;
	}
	//cout<<"num:"<<num<<endl;

	//�����񔽓]
	char tmpStr[1];
	for(int i = 0 ; i < num/2 ; i++){
		tmpStr[0] = _s1[num - i -1];
		_s1[num - i - 1] = _s1[i];
		_s1[i] = tmpStr[0];
	}


}


//�����񔽓]�֐�
void rev_str(char *_s1 , char *_s2){
	
	//�������J�E���g
	int num = 0;
	while(_s1[num] != 0){
		num++;
	}
	//cout<<"num:"<<num<<endl;

	//���]
	for(int i = 0 ; i < num ; i++){
		_s2[i] = _s1[num - i - 1];
	}
	_s2[num] = _s1[num];

}



