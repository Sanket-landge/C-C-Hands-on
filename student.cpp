#include<iostream>
using namespace std;
class Student{
	public:
	string name;
	int age;
	bool gender;
	
	void showInfo(string n, int a, bool gen){
		name=n;
		age=a;
		gender=gen;
		cout<<"Name="<<name<<" Age="<<age<<" Gender="<<gender<<endl;
	}
};
int main(){
	Student s1;
	s1.showInfo("sanket",23,1);
	
	return 0;
	
}
