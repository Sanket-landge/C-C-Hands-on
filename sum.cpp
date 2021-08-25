#include<iostream>
using namespace std;
main()
{
	int n, sum = 0, i, number;  
	cout <<"How many numbers you want to add: ";  
	cin >> n;  
	cout << "Please enter the number one by one: \n";  
	for (i = 1; i <= n; i++)  
	{  
		cin >> number;  
		sum = sum + number;  
	}  
	cout << "\n Sum of the numbers = "<< sum;
}
