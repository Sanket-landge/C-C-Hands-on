#include<iostream>
using namespace std;
struct Rectangle
{
	int height,width;
	
	Rectangle(int h,int w)
	{
		height=h;
		width=w;
	}
	
	void areaOfRectangle()
	{
		cout<<"Area of Rectangle: "<<(width*height)<<endl;
	}
};

int main()
{
	struct Rectangle rec=Rectangle(5,8);
	rec.areaOfRectangle();
	return 0;
}

