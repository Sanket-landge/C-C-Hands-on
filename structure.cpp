#include<iostream>
using namespace std;
struct Rectangle
{
	int hight, width;
}rec;

int main()
{
	rec.hight=3;
	rec.width=5;
	cout<<"Area of Rectangle is : "<<(rec.hight*rec.width)<<endl;
	return 0;
}
