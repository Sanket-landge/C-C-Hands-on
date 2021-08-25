#include<iostream>
using namespace std;
int add(int);
int main(){
	int n;
	cin>>n;
	
	cout<<"Sum is "<<add(n);
	return 0;
}

int add(int n){
	if(n!=0){
		return n+add(n-1);
	}
	return 0;
}
