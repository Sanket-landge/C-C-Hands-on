#include<iostream>
using namespace std;
int main()
{
	int side1, side2, side3;
	cout<<"Enter side1, side2, side3"<<endl;
	cin>>side1>>side2>>side3;
	
	if(side1==side2 && side2==side3){
		cout<<"Equilateral triangle";
	}
		else
			if(side1==side2 || side2==side3 || side1==side3){
				cout<<"Isoscals traingle";
			
	}
	else
		cout<<"scalene traingle";
		
	return 0;
}
