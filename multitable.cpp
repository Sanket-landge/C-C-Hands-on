#include<iostream>
using namespace std;
void multitable(int n)
{
	int i;
	for(i=1;i<=10;i++){
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	
	multitable(n);
	return 0;
}
