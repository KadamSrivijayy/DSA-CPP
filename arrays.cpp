#include<iostream>
using namespace std;

// int main(){
//     int marks[5] = {99,83,79,96,89};
//     cout<<marks[0]<<endl;
//     return 0;
// }


// // Loops Array
// int main(){
//     // int marks[5] = {99,83,79,96,89};
//     int size = 5;
//     int marks[5];

//     for(int i = 0; i<size; i++){
//         cin >> marks[i];
//     }

//     for(int i = 0; i<siz e; i++){
//         cout<< marks[i] <<endl;
//     }
//     return 0;
// }


// Find Smallest/Largest in Array
int main(){
    int nums[] = {20, -14, -24, 5, 8, 72};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallestindex = 0;
    int largestindex = 0;

    for(int i = 0; i<size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
            smallestindex = i;
        }
        else if(nums[i] > INT_MIN){
            largest = nums[i];
            largestindex = i;
        }

        // smallest = min(smallest, nums[i]);
        // largest = max(nums[i], largest);


    }

    cout<< "Smallest = " << smallest << endl;
    cout<< "Smallest Index = "<<smallestindex <<endl;
    cout<< "Largest = " << largest << endl;
    cout<<"Larest Index = " << largestindex << endl;

    
    return 0;
}


