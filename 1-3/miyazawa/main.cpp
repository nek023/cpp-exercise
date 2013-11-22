#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main(int argc , char** argv){

	//®”‚Q‚ÂéŒ¾
	int i1 , i2;

	//®”“Ç‚İ‚İ
	cout<<"please input"<<endl;
	cout<<"integer1	integer2"<<endl;
	cin>>i1>>i2;

	//“š‚¦‚ğŒvZ
	double ans;
	if(i1 == 0){
		//‚Oæ‚Í‚Å‚«‚È‚¢
		cout<<"please i1 is not 0!!"<<endl;
		return 0;
	}
	else if(i2 == 0){
		//‚O‚Ì‚Æ‚«
		ans = 1;
	}else if (i2 > 0){
		//³‚Ì‚Æ‚«
		ans = pow((double)i1 , (double)i2);
	}else{
		//•‰‚Ì‚Æ‚«
		ans = pow((double)i1 , (double)i2 * -1);
		ans = 1/ans;
	}

	//“š‚¦o—Í
	cout<<"ans:"<<ans<<endl;

}