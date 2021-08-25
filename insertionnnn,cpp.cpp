#include<iostream>
using namespace std;
int main(){
	int n,j,temp;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	cout<<"Before Sorting: "<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
		
	for(int i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i;j>0 && temp<arr[j-1];j--){
			arr[j]=arr[j-1];
		}
		arr[j]=temp;   
	}
	
	cout<<"\nAfter Sorting: "<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
