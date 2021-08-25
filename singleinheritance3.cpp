#include<iostream>
using namespace std;
class B
{
	int a=20;
	int b=30;
	public:
		int mul()
		{
			int c=a*b;
			return c;
		}
};

class A:public B
{
	public:
		void display()
		{
			int result=mul();
			cout<<"Multiplication is: "<<result<<endl;
		}
};

int main()
{
	A a1;
	a1.display();
	return 0;
}
