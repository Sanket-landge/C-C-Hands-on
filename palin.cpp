#include<iostream>
#include<strings.h>
using namespace std;
int main(){
	string name,name2;
	getline(cin,name);
	name2=name;
	
	name=strrev(name);
	
	if(name2==name)
		cout<<"Palindrome";
	else
		cout<<"Not Palindrome";
}
