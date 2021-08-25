//Idnetify if a character is vowel or consonent.

#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	
	bool isupper=false;
	bool islower=false;
	
	if((ch>=('a'||'A'))||(ch<='Z'||'z')){
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		islower=true;
	}
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
		isupper=true;
	}
	
	if(islower || isupper){
		cout<<"Its a Vowels";
	}
	else{
		cout<<"Its Consonent";
	}
}
	
	return 0;
}
