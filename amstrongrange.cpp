#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	int j,num1,num2;
	cin>>num1>>num2;
	
	int rem,sum=0;
	
	for(int i=num1;i<=num2;i++){
		j=i;
		while(i>0){
			rem=i%10;
			sum=sum+pow(rem,3);
			i=i/10;
		}
		if(j==sum){
			cout<<j<<" ";
		}
	}
	return 0;
}
