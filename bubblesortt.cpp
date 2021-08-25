#include<iostream>
using namespace std;
int main(){
	int n,temp;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Before Sorting: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	for(int i=1;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	cout<<"\n After Sorting: "<<endl;
	for(int i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
}
