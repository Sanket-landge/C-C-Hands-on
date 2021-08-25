#include<iostream>
using namespace std;
int main(){
	char c;
	cout<<"Enter any charecter"<<endl;
	cin>>c;
	
	int islower,isupper;
	
	islower=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
	isupper=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
	
	if(islower || isupper){
		cout<<c<<" is a Consonant"<<endl;
	}
	else
		cout<<c<<" is a vowel"<<endl;
		
	return 0;
}
