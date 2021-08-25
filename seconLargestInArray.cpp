//Find the second largest element in the array.

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	int smallest=arr[0];
	int largest=arr[0];
	
	for(int i=0;i<n;i++){
		if(arr[i]<smallest)
			smallest=arr[i];
		else if(arr[i]>largest)
				largest=arr[i];
				
	}
	
	cout<<"Second largest element in the array is "<<smallest<<largest;
}
