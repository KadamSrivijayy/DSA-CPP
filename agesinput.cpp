#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Ram's age: ";
    cin>>a;
    int b;
    cout<<"Enter Shyam's age: ";
    cin>>b;
    int c;
    cout<<"Enter Ajay's age: ";
    cin>>c;
    if(a<b){
        if(a<c){
            cout<<"Ram is the youngest";
        }else{
            cout<<"Ajay is the youngest";
        }
    }else{
        if(b<c){
            cout<<"Shyam is the youngest";
        }else{
            cout<<"Ajay is the youngest";
        }

    }

}