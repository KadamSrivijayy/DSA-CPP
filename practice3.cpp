#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,2,7,3,9};
    int ans = 0;
    int ans1=0;

    for (int i=0; i<5;i++){
        if (arr[i]>ans){
            ans1=ans;
            ans=arr[i];

        }
    }

    cout<<"largest number: "<<ans<<endl;
    cout<<"Second largest number:"<<ans1<<endl;
    
}



