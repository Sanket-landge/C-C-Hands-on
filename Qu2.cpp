#include<iostream>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	
	int num=1;
    for(int temp=m;temp<=n;temp++){
    	if(num%temp==0){
    		continue;
		}
		else{
			num++;
			temp=m;
		}
	}
	cout<<num;
	return 0;
}
	
	
