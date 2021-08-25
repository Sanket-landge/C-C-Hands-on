#include<iostream>
#include<string.h>
using namespace std;
int main(){
	
	char name[20];
	cin.get(name,20);
	
	int n=strlen(name);
	
	bool check=true;
	
	for(int i=0;i<n;i++){
		if(name[i]!=name[n-1-i]){
			check=false;
			break;
		}
	}
	
	if(check==true)
		cout<<"Palindrome string";
	else
		cout<<"Not a palindrome string";
		
	return 0;
}
