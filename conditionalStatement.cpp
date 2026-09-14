#include<iostream>
using namespace std;
 
int main(){
    // int n;
    // cout<<"Enter number: ";
    // cin>>n;

    // if(n%2 == 0){ 
    //     cout<<"Even number"<<endl;
    //     cout<<"Gand faad";
    // }
    // else{
    //     cout<<"Odd number"<<endl;
    //     cout<<"TBSM";
    // }


    // int x;
    // cout<<"Enter number:";
    // cin>>x;

    // if(x%5==0){
    //     cout<<"Number divisible by 5";
    // }
    // else{
    //     cout<<"Number is not divisible by 5";
    // }


    // int x;
    // cout<<"Enter num: ";
    // cin>>x;
    // if(x>=0){
    //     cout<<x;
    // }
    // else{
    //     cout<<-(x);
    // }

    int cp;
    cout<<"Enter cost price: ";
    cin>>cp;
    int sp;
    cout<<"Enter Selling Price: ";
    cin>>sp;

    if(sp>cp){
        cout<<"Seller made profit";
    }
    else if(sp<cp){
        cout<<"Seller made loss";
    }
    else if(sp==cp){
        cout<<"Seller made noProfit";
    }

}

