#include<iostream>
using namespace std;
class Test
{
	private:
		int num;
	public:
		Test():num(8){}
		void operator ++()
		{
			num=num+3;
		}
	void print()
	{
		cout<<"The count is : "<<num;
	}
};

int main()
{
	Test t1;
	++t1;
	t1.print();
	return 0;
}
