#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    if(x>99 && x<1000){
        cout<<"Three digit number";
    }
    else{
        cout<<"Not a three digit number";
    }
}