#include<iostream>
using namespace std;
int main(){
   int x;
   cout<<"Enter number 1: ";
   cin>>x;
   int y;
   cout<<"Enter number 2: ";
   cin>>y;
   cout<<x+y<<endl;

    int x;
    cout<<"enter num: ";
    cin>>x;
    if(x<0){
        cout<<"Negitive Number";
    }
    else if(x>0){
        cout<<"Positive Number";
    }
    else{
        cout<<"Number is Zero";
    }

    int n;
    cout<<"Enter num: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<i<<endl;
    }

}
