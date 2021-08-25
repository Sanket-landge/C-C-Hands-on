#include<iostream>
using namespace std;
class cal
{
	public:
		static int add(int a,int b)
		{
			return a+b;
		}
		
		static int add(int a,int b,int c)
		{
			return a+b+c;
		}
};

int main()
{
	cal c;
	cout<<c.add(20,40)<<endl;
	cout<<c.add(20,40,50)<<endl;
	return 0;
	
}
