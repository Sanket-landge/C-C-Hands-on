#include<iostream>
using namespace std;
int factorial(int);
int sumof(int);
int main(){
	int num;
	cin>>num;
	
	int fact=factorial(num);
	cout<<"Factorial of "<<num<<"is "<<fact<<endl;
	
	int sum=sumof(num);
	cout<<"The sum of natural no. upto "<<num<<"is "<<sum<<endl;
}


int factorial(int x){
	if(x==1)
		return 1;
	else{
		return x*factorial(x-1);
	}
}

int sumof(int x){
	if(x==1)
		return 1;
	else{
		return x+sumof(x-1);
	}
}
