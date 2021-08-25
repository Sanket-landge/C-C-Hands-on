//Remove consonent from string.

#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char str[100],temp[100];
	
	cin.get(str,25);
	
	cout<<str<<endl;
	int i=0, j=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U' )
		{
			temp[j++]=str[i];
		}
		
		i++;
	}
	temp[j]='\0';
	cout<<temp;
	return 0;
	
}
