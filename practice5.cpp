#include<iostream>
using namespace std;
int main(){
    int num = 1;
    int arr[4] = {1,2,3,4};
    int answer[4];

    for(int i = 1; i <= 4; i++){
        int product = 1;

        for (int j = 0; j < 4; j++) {
            if (i != j) {
                product = product * arr[j];
            }
        }

        answer[i] = product;
    }

    for (int i = 0; i < 4; i++) {
        cout << answer[i] << " ";
    }

    return 0;

}