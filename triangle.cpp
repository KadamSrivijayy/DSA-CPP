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

    if(a+b>c){
        cout<<"it is a triangle";
    }
    else if(b+c>a){
        cout<<"It is a triangle";
    }
    else if(c+a>b){
        cout<<"It is a triangle";
    }
    else{
        cout<<"it is not a triangle";
    }

}