#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first mumber : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Enter third number : ";
    cin>>c;
    if(a>=b && a>=c){
        cout<<a<<" is greatest";
    }
    if(b>=a && b>=c){
        cout<<b<<" is greatest";
    }
    if(c>=a && c>=b){
        cout<<c<<" is greatest";
    }
     
}