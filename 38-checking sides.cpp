#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first side : ";
    cin>>a;
    cout<<"Enter second side : ";
    cin>>b;
    cout<<"Enter third side : ";
    cin>>c;
    if((a+b>c) && (a+c>b) && (b+c>a)){
        cout<<"Valid sides";
    }
    else{
        cout<<"Invalid triangle";
    }
}