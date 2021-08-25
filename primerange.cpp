#include<iostream>
#include<conio.h>

using namespace std;
void isPrime(int,int);
int main(){
	int num1,num2;
	cin>>num1>>num2;
	
	isPrime(num1,num2);
	return 0;
}

void isPrime(int num1,int num2){
	int i,j,flag;
	for(i=num1;i<=num2;i++){
		flag=0;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0)
			cout<<i<<" ";
		
	}
}
