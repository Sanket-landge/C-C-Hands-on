#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    int a,b;
    cin>>a>>b;
    
    string digit[]={"one","two","three","four","five","six","seven","eight","nine"};
    
    for(int i=a;i<=b;i++){
        if(i<=9)
            cout<<digit[i-1];
        else {
            cout<<(i%2==0?"even":"odd");
        }
        cout<<endl;
    }
    
    return 0;
}
