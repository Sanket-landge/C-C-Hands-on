#include<iostream>
using namespace std;
class complex{
	private:
		int a,b;
	public:
		void set_data();
		void show(){
			cout<<"\na= "<<a<<"\nb= "<<b<<endl;
			
		}
};

void complex::set_data(){
	int x,y;
	cout<<"Enter two nums";
	cin>>x>>y;
	a=x;
	b=y;
}
int main(){
	complex c1;
	c1.set_data();
	c1.show();
	return 0;
}
