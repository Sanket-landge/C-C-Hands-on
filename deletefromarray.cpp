#include<iostream>
using namespace std;
int main(){
	int n,position;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
		
	cout<<"\nEnter the position to delete: ";
	cin>>position;
	
	for(int i=position;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	
	for(int i=0;i<n-1;i++)
		cout<<arr[i]<<" ";
		
	return 0;
}
