#include<iostream>
using namespace std;

// int printhello(){
//     cout<<"Hello"<<endl;
//     cout<<"I am SuperHero"<<endl;
//     return 0;
// }

// int main(){
//     printhello();
//     printhello();
//     printhello();
// }





// //SUM OF 2 NUMBERS
// int sum(int a, int b){
//     int s = a + b;
//     cout<<s<<endl;
//     return s;
// }

// int main(){
//     sum(5, 7);
//     sum(4, 2);

//     return 0;
// }




// // MIN OF 2 NUMBERS
// int minOfTwo(int a, int b){
//     if(a<b){
//         return a;
//     }else{
//         return b;
//     }

//     return 0;
// }


// int main(){
//     cout<<"Min value is = "<<minOfTwo(5,9)<<endl;
//     cout<<"Min value is = "<<minOfTwo(5,3)<<endl;
//     cout<<"Min value is = "<<minOfTwo(3,7)<<endl;
//     cout<<"Min value is = "<<minOfTwo(29,33)<<endl;
//     cout<<"Min value is =  "<<minOfTwo(55,35)<<endl;

// }



// // CALCULATE NUMBERS FROM 1TO N
// int sumN(int n){
//     int sum = 0;
//     for(int i=1; i<=n; i++){
//         sum += i;
//     }

//     return sum;
// }

// int main(){
//     cout<<sumN(3)<<endl;
//     cout<<sumN(5)<<endl;
//     cout<<sumN(10)<<endl;

// }



// //CALCULATE N FACTORIAL
// int nfact(int n){
//     int fact = 1;
//     for(int i = 1; i<=n; i++){
//         fact = fact*i;
//     }

//     return fact;
// }

// int main(){
//     cout<<nfact(3)<<endl;
//     cout<<nfact(4)<<endl;
//     cout<<nfact(5)<<endl;
//     return 0;
// }



// // CALCULATE SUM OF DIGIT OF NUMBER
// int sumOfDigit(int n){
//     int sum = 0;
//     while(n>0){
//         int ld = n%10;
//         n = n/10;
//         sum += ld;
//     }
//     return sum; 
    
// }

// int main(){
//     cout<<sumOfDigit(124);
//     return 0;
// }




//CALCULATE nCr BINOMIAL COEFFICIENT for n & r
int fact(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }

    return fact;
}
int nCr(int n, int r){
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_nmr = fact(n-r);

    return fact_n/ (fact_r * fact_nmr); 
     
}

int main(){
    int n = 6; int r = 3;
    cout<<nCr(n, r);

    return 0;
}
