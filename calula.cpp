#include<iostream>
using namespace std;
int main()
{
	int num1,num2,result,choice;
	
	do{
		cout<<"\n***C++ CALCULATOR***"<<endl;
		cout<<"MAKE A CHOICE..!!"<<endl;
		choose:
			cout<<"1. Additon"<<"\n2. Subtraction"<<"\n3. Multiply"<<"\n4. Division"<<"\n5. Square"<<"\n0. Exit"<<endl;
			cout<<"ENTER YOUR CHOICE HERE: ";
		cin>>choice;

			switch(choice)
			{
				case 1:
					cout<<"ENTER 1ST NUMBER:"<<endl;
					cin>>num1;
					cout<<"ENTER 2ND NUMBER:"<<endl;
					cin>>num2;
					result=num1+num2;
					cout<<"ADDITION IS: "<<result;
						break;
			
				case 2:
					cout<<"ENTER 1ST NUMBER:"<<endl;
					cin>>num1;
					cout<<"ENTER 2ND NUMBER:"<<endl;
					cin>>num2;
					result=num1-num2;
					cout<<"SUBTRACTION IS: "<<result;
						break;
			
				case 3:
					cout<<"ENTER 1ST NUMBER:"<<endl;
					cin>>num1;
					cout<<"ENTER 2ND NUMBER:"<<endl;
					cin>>num2;
					result=num1*num2;
					cout<<"MULTIPLICATION IS: "<<result;
					break;
			
				case 4:
					cout<<"ENTER 1ST NUMBER:"<<endl;
					cin>>num1;
					cout<<"ENTER 2ND NUMBERR:"<<endl;
					cin>>num2;
					while(num2==0)
					{
						cout<<"DIVISOR CANNOT BE ZERO. ENTER THE DIVISOR AGAIN:"<<endl;
						cin>>num2;
					}
					result=num1/num2;
					cout<<"DIVISION IS: "<<result;
					break;
				
				case 5:
					cout<<"ENTER THE NUMBER: "<<endl;
					cin>>num1;
					cout<<"SQUARE IS:"<<num1*num1<<endl;
					break;
				
				case 0:
					exit(0);
					break;
				
				default:
					cout<<"WRONG CHOICE. SELECT AGAIN: "<<endl;
					goto choose;	
			}
	}while(choice!=0);
	return 0;
}
