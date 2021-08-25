#include<iostream>
#include<string>
using namespace std;
int main() {
	string a;
	getline(cin,a);
	
	int n=a.length();
	cout<<n;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]==('a' || 'A' || 'e' || 'E' || 'i' || 'I' || 'o' || 'O' || 'u' || 'U'))
			cout<<a[i];
		else
			continue;
	}
	return 0;
}
