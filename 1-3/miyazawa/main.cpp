#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main(int argc , char** argv){

	//�����Q�錾
	int i1 , i2;

	//�����ǂݍ���
	cout<<"please input"<<endl;
	cout<<"integer1	integer2"<<endl;
	cin>>i1>>i2;

	//�������v�Z
	double ans;
	if(i1 == 0){
		//�O��͂ł��Ȃ�
		cout<<"please i1 is not 0!!"<<endl;
		return 0;
	}
	else if(i2 == 0){
		//�O�̂Ƃ�
		ans = 1;
	}else if (i2 > 0){
		//���̂Ƃ�
		ans = pow((double)i1 , (double)i2);
	}else{
		//���̂Ƃ�
		ans = pow((double)i1 , (double)i2 * -1);
		ans = 1/ans;
	}

	//�����o��
	cout<<"ans:"<<ans<<endl;

}