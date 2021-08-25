#include<iostream>
#include<string.h>
using namespace std;
bool isPalindrome(string x){
	bool palindrome=true;
	
	for(int i=0;i<n;i++){
		if(x[i]!=x[n-1-i])
			palinderome=false;
			break;
	}
	
	return palindrome;
}

int main(){
	string name;
	geline(cin,name);
	
	cout<<isPalindrome(name);
}
