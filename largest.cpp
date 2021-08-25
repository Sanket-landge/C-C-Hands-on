#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	int mx=max(a,max(b,c));
	cout<<mx<<" is largest"<<endl;
	return 0;
}
