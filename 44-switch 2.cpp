#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter numbers : ";
    cin>>n1>>n2;

    char op;
    cout<<"Enter an operator : ";
    cin>>op;

    switch (op){
        case '+':
        cout<<n1+n2;
        break;

        case '-':
        cout<<n1-n2;
        break;

        case '*':
        cout<<n1*n2;
        break;

        case '/':
        cout<<n1/n2;
        break;

        default:
        cout<<"Enter another operator : ";
        break;
    }
}