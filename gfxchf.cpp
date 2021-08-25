#include<iostream>
using namespace std;
int main()
{
	int arr[]={20,30,50,10,40};
	int i,j,temp;
	
	for(i=1;i<5;i++){
		temp=arr[i];
		for(j=i;j>0 && temp<arr[j-1];j--){
			arr[j]=arr[j-1];
		}
		arr[j]=temp;
	}
	
	for(i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	
}
