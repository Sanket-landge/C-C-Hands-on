#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n, i, temp = 5 ;
    int sum = 0;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    for(i = 1; i<= n; i++){
        sum = sum + temp ;
        cout<<temp<<" ";
        temp = temp * 10 + 5 ;
    }

    cout<<endl<<sum;
   
    return 0;
}
