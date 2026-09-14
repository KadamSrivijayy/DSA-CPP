#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a: ";
    cin>>a;
    int b;
    cout<<"Enter b: ";
    cin>>b;
    int c;
    cout<<"Enter c: ";
    cin>>c;
    if(a>b and a>c){
        cout<<"A is the gratest num";
    }
    else if(b>a and b>c){
        cout<<"B is gratest number";
    }
    else{
        cout<<"C is gratest number";
    }
}