#include<iostream>
#include<strings.h>
using namespace std;
int main(){
	char arr[20];
	cin.get(arr,20);
	
	int i=0;
	int maxlen=0,currentlen=0;
	
	while(1){
		if(arr[i]==' '|| arr[i]=='\0'){
			if(currentlen>maxlen){
				maxlen=currentlen;
			}
			currentlen=0;
		}
		else
			currentlen++;
		if(arr[i]=='\0')
			break;
		i++;
	}
	cout<<maxlen;
	
}
