#include<iostream>
using namespace std;

int main()
{
	int a,b,ans=1;
	cin>>a>>b;

	for(int i=0;i<b;i++)ans*=2;

	cout<<ans<<"\n";

	return 0;
}