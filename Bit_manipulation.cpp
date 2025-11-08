#include<iostream>
using namespace std;

int main(){
    // sawp without third variable     
    int a=4, b=7;
    a=a-b;
    b=a+b;
    a=-1*(a-b);
    cout<<"a is now "<<a<<" "<<"and b is "<<b<<endl;

    // check if the inth bit is set or not
    int n=11, i=2;
    int mask=1;
    while(i--){
        mask = mask<<1;
    }
    if(n&mask) cout<<"set bit"<<endl;
    else cout<<"not set bit"<<endl;

    
    return 0;
}