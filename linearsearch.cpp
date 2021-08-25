#include<iostream>
using namespace std;
int linearSearch(int arr[],int n, int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
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
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	cout<<"Enter the key to be searched: "<<endl;
	cin>>key;
	
	cout<<linearSearch(arr,n,key);
	
}
