#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    if(x>=91) cout<<"Excellent";
    else if(x>=71) cout<<"Very good";
    else if(x>=51) cout<<"can do better";
    else cout<<"Average";
    
}