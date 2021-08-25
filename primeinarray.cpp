#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=2;j<=arr[i]/2;j++){
			if(arr[i]%j==0)
			flag=1;
			break;
		}
		if(flag==0){
			cout<<"Prime no in the array: "<<arr[i];
			break;
		}
	}
}
