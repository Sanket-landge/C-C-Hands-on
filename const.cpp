#include<iostream>
using namespace std;
void fun(const int);
int main()
{
	int x=10;
	fun(x);
	return 0;
}

void fun(const int x){
	//x++; this will throw an error because const means no modification to that variable.+
	cout<<x;
}
