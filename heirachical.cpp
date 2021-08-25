#include<iostream>
using namespace std;
class shape
{
	public:
		int a;
		int b;
	void get_data(int l,int b)
	{
		a=l;
		b=b;
	}
};

class Rectangle:public shape
{
	public:
		int AreaRectangle()
		{
			int result=a*b;
			return result;
		}
};

class Traingle:public shape
{
	public:
		int AreaTraingle()
		{
			int result1=0.5*a*b;
			return result1;
		}
};

int main()
{
	int length,breadth,base,height,rarea,tarea;
	Rectangle r1;
	Traingle t1;
	cout<<"enter the length and breadth of a rectangle "<<endl;
	cin>>length>>breadth;
	r1.get_data(20,15);
	rarea=r1.AreaRectangle();
	cout<<rarea;
	cout<<"\nEnter the base and Height of the trangle: "<<endl;
	cin>>base>>height;
	t1.get_data(base,height);
	tarea=t1.AreaTraingle();
	cout<<tarea;
	return 0;
}
