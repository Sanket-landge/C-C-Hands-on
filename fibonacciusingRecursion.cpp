#include<iostream>
using namespace std;
void fibonacci(int);
int main(){
	int num;
	cin>>num;
	cout<<"0\t1";
	fibonacci(num-2);
    return 0;
}

void fibonacci(int n){
	static int n1=0,n2=1,n3;
	if(n>0){
		n3=n1+n2;
		n1=n2;
		n2=n3;
		cout<<"\t"<<n3;
		fibonacci(n-1);
	}
	
}
