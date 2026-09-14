#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number: ";
    cin>>x;

    if(x%5==0 || x%3==0){
        cout<<"Divisible by of 3 or 5";
    }
    else{
        cout<<"Not Divisible by 3 or 5";
    }
}
