#include <iostream>

using namespace std;

int main(void)
{
	int n;
	int m;
	int result=1;

	cin>>n>>m;

	for(int i=0; i<m;i++){
		result *= n;
	}
	cout<<result<<endl;

	return 0;
}

