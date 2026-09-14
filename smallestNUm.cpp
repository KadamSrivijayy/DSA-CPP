#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter a: ";
    cin>>a;
    int b;
    cout<<"Enter b: ";
    cin>>b;
    int c;
    cout<<"Enter c: ";
    cin>>c;
    if(a<b and a<c) {
        cout<<a<<" A is the least Number";
    }
    if(b<a and b<c) {
        cout<<b<<" B is the least Number";
    }
    else  {
        cout<<c<<" C is the least Number";
    } 

     
}
    