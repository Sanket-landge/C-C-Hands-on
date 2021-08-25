#include<iostream>
#include<strings.h>
using namespace std;

int main(){
	char arr[20];
	cin.get(arr,20);
	cout<<"You have entered: "<<arr<<endl;
	
	
	int n=strlen(arr);
	cout<<strrev(arr);
	int count=1;
	for(int i;i<n;i++){
		if(arr[i]!=arr[n-1-i]){
			count=0;
			break;
		}
	}
	if(count==1)
		cout<<"Palindrome";
	else
		cout<<"Not Palindrome";
}
