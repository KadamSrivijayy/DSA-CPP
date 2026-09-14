#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter number: ";
     cin>>n;
     if((n%3==0 || n%5==0) && (n%15!=0)){
        cout<<"Yes, The number is divisible by 5 or 3 But not divisible by 15";
    }
    else{
        cout<<"No, the condition is not satisfied.";

    }
}
