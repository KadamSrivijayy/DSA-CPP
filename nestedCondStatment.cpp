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

    if(a>b){
        if(a>c){
            cout<<"A is the gratest number";
        }else{
            cout<<"C is the gratest number";
        }
    }else{
        if(b>c){ 
        cout<<"B is the gratest number";
        }
        else{
            cout<<"C is the gratest number";
        }
    }

}