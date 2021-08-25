#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
	public:
		void get_a(int n)
		{
			a=n;
		}
};

class B
{
	protected:
		int b;
	public:
		void get_b(int q)
		{
			b=q;
		}
};

class C:public A, public B
{
	public:
		void display()
		{
			cout<<"Value of a is: "<<a<<endl;
			cout<<"Value of b is: "<<b<<endl;
			cout<<"Addition of a and b is: "<<a+b<<endl;
		}
};

int main()
{
	C c1;
	c1.get_a(20);
	c1.get_b(30);
	c1.display();
	return 0;
}
