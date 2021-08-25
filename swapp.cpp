#include<iostream>
using namespace std;
void swap(int a, int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"inside function: "<<a<<" "<<b;
}
int main(){
	int x,y;
	cin>>x>>y;
	swap(x,y);
	cout<<endl<<"outside function: "<<x<<" "<<y;
	
}
