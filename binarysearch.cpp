#include<iostream>
using namespace std;
int binarySearch(int arr[],int n, int key)
{
	int low=0;
	int high=n-1;	
	while(low<=high){
		int mid=(low+high)/2;
		
		if(arr[mid]==key){
			return mid;
		}
		else
			if(key<arr[mid])
				high=mid-1;
			else
				low=mid+1;
	}
	return -1;
}
int main()
{
	int n,key;
	cout<<"Enter size of array: "<<endl;
	cin>>n;
	
	int arr[n];
	cout<<"Enter array elements: "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Enter key to be searched: "<<endl;
	cin>>key;
	
	cout<<binarySearch(arr, n, key);
}
