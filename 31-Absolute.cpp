#include <iostream>
using namespace std;
int main (){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    if(x<0)
    x *= -1;
    cout<<x;
}