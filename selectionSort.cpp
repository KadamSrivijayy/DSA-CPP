#include <iostream>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        int smallest = i;
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[smallest]){
                smallest = j;
            }
        }
        swap(arr[smallest], arr[i]);
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i< size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size = 5;
    int arr[] = {43, 51, 58, 52, 93};
    selectionSort(arr, size);
    printArray(arr, size);

    return 0;

}