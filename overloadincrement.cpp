#include<iostream>
using namespace std;
class check{
	private:
		int i;
	public:
		clear(){
			i=0;
		}
		void operator ++(){
			i=i+5;
		}
		void Display(){
			cout<<"i="<<i<<endl;
		}
};
int main(){
	check ob;
	ob.Display();
	++ob;
	ob.Display();
	return 0;
}
