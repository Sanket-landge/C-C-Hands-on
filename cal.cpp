#include<iostream>
using namespace std;
int main()
{
	int num1,num2,result,choice;
	cout<<"***C++ CALCULATOR***"<<endl;
	cout<<"Make a Choice..!!"<<endl;
	choose:
		cout<<"1. Additon"<<"\n2. Subtraction"<<"\n3. Multiply"<<"\n4. Division"<<"\n5. Square"<<"\n0. Exit"<<endl;
	cin>>choice;

		switch(choice)
		{
			case 1:
				cout<<"Enter 1st number:"<<endl;
				cin>>num1;
				cout<<"Enter 2nd number:"<<endl;
				cin>>num2;
				result=num1+num2;
				cout<<"Addion is: "<<result;
				break;
			
			case 2:
				cout<<"Enter 1st number:"<<endl;
				cin>>num1;
				cout<<"Enter 2nd number:"<<endl;
				cin>>num2;
				result=num1-num2;
				cout<<"Subtraction is: "<<result;
				break;
			
			case 3:
				cout<<"Enter 1st number:"<<endl;
				cin>>num1;
				cout<<"Enter 2nd number:"<<endl;
				cin>>num2;
				result=num1*num2;
				cout<<"Multiplication is: "<<result;
				break;
			
			case 4:
				cout<<"Enter 1st number:"<<endl;
				cin>>num1;
				cout<<"Enter 2nd number:"<<endl;
				cin>>num2;
				while(num2==0)
				{
					cout<<"Divisor can't be zero. Plese enter the divisor again.";
					cin>>num2;
				}
				result=num1/num2;
				cout<<"Division is "<<result;
				break;
				
			case 0:
				exit(0);
				break;
				
			default:
				cout<<"Wrong Choice: ";
				goto choose;	
		}
	return 0;
}
