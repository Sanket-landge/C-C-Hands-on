#include<iostream>
using namespace std;
int main()
{
	int n,space;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		for(space=1;space<=n-i;space++){
			cout<<"  ";
		}
		
		for(;space<=n;space++){
			cout<<"* ";
		}
		for(int k=2;k<=i;k++){
			cout<<"* ";
		}
		cout<<endl;
	}
	
	for(int i=n;i>=1;i--){
		for(space=1;space<=n-i;space++){
			cout<<"  ";
		}
		
		for(;space<=n;space++){
			cout<<"* ";
		}
		for(int k=2;k<=i;k++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
