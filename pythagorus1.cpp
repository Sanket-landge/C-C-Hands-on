#include<iostream>
#include<algorithm>
using namespace std;
bool pythagorus(int a,int b, int c){
	int x=max(a, max(b,c));
	int y,z;
	
	if(x==a){
		y=b;
		z=c;
	}
	else
		if(x==b){
			y=a;
			z=c;
		}
		else
		{
			y=a;
			z=b;
		}
		
	if ((x*x)==(y*y)+(z*z))
		return true;
	else
		return false;
}

int main()
{
	int side1,side2,side3;
	cin>>side1>>side2>>side3;
	
	cout<<pythagorus(side1,side2,side3);
}
