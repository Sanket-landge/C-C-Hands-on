#include<iostream>
using namespace std;
void print(int n)
{
	int i;
	for(i=1;i<=n;i++){
		if(i%2==0)
			continue;
		cout<<i<<"\t";
	}
}
int main()
{
	int n;
	cin>>n;
	
	print(n);
	return 0;
}
