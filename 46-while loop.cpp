#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int sum = 0;

    int i = 1;//loop variable or iterator
    while(i<=n){//condition
        sum+=i;
        i=i++;//updating condition
    }
    cout<<sum<<endl;
}