#include<iostream>
#include<conio.h>
using namespace std;
inline float mul(float x,float y){
	return x*y;
}
inline float div(float x, float y){
	return x/y;
}
int main(){
	float a,b;
	cin>>a>>b;
	
	
	cout<"Multiplication is: "<<mul(a,b);
	cout<<endl;
	cout<<"Division is: "<<div(a,b);
	return 0;
	
}
