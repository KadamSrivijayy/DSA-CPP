
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    bool flag = true; //true mean prime
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag = false; //false means composite
            break;
        }

    }
    if(n == 1){
        cout<<"Nither Prime Nor Composite";
    }
    else if(flag == true){
        cout<<"Prime Number";
    }
    else{
        cout<<"Composite Number";
    }

    
}