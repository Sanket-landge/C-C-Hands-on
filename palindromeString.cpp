#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char arr[50];
	cin.get(arr,50);
	
	bool check=true;
	int n=strlen(arr);
	
	for(int i=0;i<n;i++){
		if(arr[i]!=arr[n-1-i]){
			check=false;
			break;
		}
	}
	if(check)
		cout<<"Palindrome";
	else
		cout<<"Not Palindrome";
		
	return 0;
	
}
