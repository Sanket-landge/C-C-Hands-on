#include<iostream>
#include<conio.h>
using namespace std;
void increment(void);

int main()
{
	increment();
	increment();
	increment();
}

void increment()
{
	static int i=100;
	i++;
	cout<<"i="<<i<<endl;
}
