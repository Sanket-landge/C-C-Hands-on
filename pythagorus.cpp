#include<iostream>
using namespace std;

int main()
{
	int side1,side2,side3,max,min,mid;
	cout<<"Enter values";
	cin>>side1>>side2>>side3;
	
	if(side1>side2){
		if(side1>side3){
			max=side1;
			mid=side3;
			min=side2;
		}
		else
			max=side3;
			mid=side1;
			min=side2;
	}
	else
	{
		if(side2>side3){
			if(side3>side1){
				max=side2;
				mid=side3;
				min=side1;
			}
			else
				{
					max=side2;
					mid=side1;
					min=side3;
				}
		}
		else
			{
				max=side3;
				if(side1>side2){
					mid=side1;
					min=side2;
				}
				else
					mid=side2;
					min=side1;
					
				
			}
	}
	if((max*max)==(min*min)+(mid*mid))
		cout<<"it is a pythagorus triplet"<<endl;
	else
		cout<<"it is not a pythagorus triplet"<<endl;
		
	return 0;
}


