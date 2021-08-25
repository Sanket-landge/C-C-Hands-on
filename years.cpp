#include<iostream>
using namespace std;
int main(){
	int years, weeks, days;
	
	cout<<"Enter days:"<<endl;
	cin>>days;
	
	years=days/365;
	weeks=(days%365)/7;
	days=days-((years*365)+(weeks*7));
	
	cout<<years<<endl<<weeks<<endl<<days<<endl;
	return 0;
}
