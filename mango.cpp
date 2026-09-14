// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {33,23,13,-22,64};
//     int size = 5;

//     int smallest = INT_MAX;
//     int largest = INT_MIN;
//     for(int i = 0; i<size; i++){
//         if(arr[i] < smallest){
//             smallest = arr[i];
//         }
//         if(arr[i] > largest){
//             largest = arr[i];
//         }
//     }
//     cout<<"Smallest element in the array is: "<<smallest<<endl;  
//     cout<<"Largest element in the array is: "<<largest<<endl;  
// }






// // Linear Search

// #include<iostream>
// using namespace std;

// int linearSearch(int arr[], int size, int target){

//     for(int i = 0; i<size; i++){
//         if(arr[i] == target){
//             cout<<"target found at index: "<<i<<endl;
//             return i;
//         }
//     }
//     cout<<"target not found"<<endl;
//     return -1;
// }


// int main(){
//     int arr[] = {33,23,13,-22,8,64};
//     int size = 6;

//     int target = 8;
//     linearSearch(arr, size, target);
//     return 0;
// }








// Reverse an array

#include<iostream>
using namespace std;        



void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;

    reverseArray(arr, size);

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}