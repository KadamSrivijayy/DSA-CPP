#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter marks: ";
    cin>>x;

    if(x>=81 && x<=100){
        cout<<"VERY GOOD";
    }
    else if(x>=61 && x<=80){
        cout<<"GOOD";
    }
    else if(x>=41 && x<=60){
        cout<<"AVERAGE";
    }
    else{
        cout<<"FAIL";
    }
}

