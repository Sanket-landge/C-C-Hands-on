#include<iostream>
using namespace std;
bool checkPrime(int);
int main(){
	int n;
	cin>>n;
	
	if(checkPrime(n)){
		cout<<"Prime number"<<endl;
	}
	else
		cout<<"Not prime numer"<<endl;
	return 0;
	
}

bool checkPrime(int n){
	bool isprime=true;
	
	if(n==0 || n==1)
		isprime=false;
		
	else{
		for(int i=2;i<=n/2;i++){
			if(n%i==0){
				isprime=false;
				break;
			}
		}
	}
	return isprime;
}
