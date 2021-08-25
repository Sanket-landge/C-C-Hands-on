#include<iostream>
using namespace std;
main()
{	
	int i;
	int size; //variable
	int *arr=new int(size); //creating array with new keyword
	
	cout<<"Enter the size of the array: "<<endl;
	cin>>size;
	
	cout<<"Enter the elements: "<<endl;
	for(i=0;i<size;i++)
		cin>>arr[i];
		
	cout<<"\nYou have entered: "<<endl;
	for(i=0;i<size;i++)
		cout<<arr[i]<<"\t";
		
	delete arr;
	
}
