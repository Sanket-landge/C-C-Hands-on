#include<iostream>
using namespace std;
void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a=12;
	int b=20;
	
	swap(&a,&b);
	
	cout<<a<<" "<<b<<endl;
	return 0;
}