#include <iostream>
#include <string>
using namespace std;


// //Print message using function
// void greet(){
//     cout << "Hello World" << endl;
// }


// int main(){
//     greet();
//     return 0;

// }






// //Add two numbers
// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     cout << add(10, 20);
// }






// //Maximum of two numbers
// int add(int a, int b){
//     if(a>b){
//         return a;
//     }else{
//          return b;
//     };
// }

// int main(){
//     int a,b;
//     cout<<"Enter two numbers: "<<endl;
//     cin>>a>>b;

//     cout<<add(a,b)<<endl;
// }





// //Check even or odd
// bool isEven(int n) {
//     return n % 2 == 0;
// }

// int main() {
//     int n;
//     cin >> n;

//     if (isEven(n))
//         cout << "Even";
//     else
//         cout << "Odd";
// }




// //Square of a number
// int square(int n) {
//     return n * n;
// }

// int main() {
//     int n;
//     cin >> n;

//     cout<<square(n)<<endl;
// }





// // Factorial of Number
// int factorial(int n){
//     int fact = 1;

//     for(int i=1; i<=n; i++){
//         fact *= i;
//     }

//     return fact;
// }


// //int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;

//     cout<<factorial(n)<<endl;
// }




// //Positive, negative or zero
// void checkNumber(int n){
//     if(n>0){
//         cout<<"Positive"<<endl;
//     }else if(n<0){
//         cout<<"Negative"<<endl;
//     }else{
//         cout<<"Zero"<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;

//     checkNumber(n);
// }





// //Prime number
// int isPrime(int n){
//     if(n<2){
//         return false;
//     }
    
//     for(int i = 2; i < n; i++){
//         if(n%i==0){
//             return false;
//         }
//     }

//     return true;
// }

// int main(){
//     int n;
//     cin>>n;

//     if(isPrime(n)){
//         cout<<"Prime"<<endl;
//     }else{  
//         cout<<"Not Prime"<<endl;
//     }
// }




// //  Print primes from 1 to n
// int prime(int num){
//     if (num<2){
//         return false;
//     }

//     for(int i = 2; i <num; i++){
//         if(num % i == 0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int num;
//     cout<<"Enter num: ";
//     cin>>num;
//     for(int i=2; i<=num; i++){
//     if(prime(i)){
//         cout<<i<<endl;
//     }
// }
//     return 0;
// }



// //Power
// int power(int base, int exponent){
//     int result = 1;

//     for(int i = 1; i <= exponent; i++){
//     result *= base;
//     }

//     return result;
// }


// int main(){
//     int base, exponent;
//     cout<<"base and exponent: ";
//     cin>>base>>exponent;

//     cout<<power(base,exponent)<<endl;
// }





// //Reverse
// int reverse(int num){
//     int rev = 0;
//     while(num>0){
//         int digit = num%10;
//         rev = rev * 10 + digit;
//         num = num / 10;
//     }
//     return rev;
// }


// int main(){
//     int num;
//     cout<<"Enter number: ";
//     cin>>num;

//     cout<<reverse(num);
// }



// // Who's Aman's father
// int main(){
//     string name;
//     cout<<"Enter name: ";
//     cin>>name;
//     if(name == "VIJAY"){
//         cout<<name<<" is Aman's father"<<endl;
//     }else if(name == "JEEVAN"){
//         cout<<name<<" is Aman's Secondfather"<<endl;
//     }
//     else{
//         cout<<name<<"is not Aman's father"<<endl;
//     }

// }



