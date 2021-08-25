#include<iostream>
#include<string>
using namespace std;
class book{
	private:
		int bookid;
		char bookname[100];
		int bookprz;
	public:
		void input(){
			cout<<"Enter bookid, bookname and book price: "<<endl;
			cin>>bookid;
			cin>>bookname;
			cin>>bookprz;
		}
		
		void display(){
			cout<<bookid<<" ";
			cout<<bookname<<" ";
			cout<<bookprz<<endl;
		}
};
int main(){
	book b1,b2;
	b1.input();
	b1.display();
	b2.input();
	b2.display();
	return 0;
}
