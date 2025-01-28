#include <iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter cost price : ";
    cin>>cp;
    cout<<"Enter selling price : ";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit is : ";
        cout<<sp-cp;
    }
        if(cp>sp){
        cout<<"Loss is : ";
        cout<<cp-sp;
        }
        if(cp==sp){
            cout<<"No profit No loss";
        }
}