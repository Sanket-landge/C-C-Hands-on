#include<iostream>
using namespace std;
int main(){
	int n,position,element;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	cout<<"Enter the position and element: "<<endl;
	cin>>position>>element;
	
	for(int i=n;i>position;i--){
		arr[i]=arr[i-1];
	}
	
	arr[position]=element;
	
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
