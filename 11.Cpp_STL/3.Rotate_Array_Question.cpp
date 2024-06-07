#include <iostream>
using namespace std;

void RotateArray(int arr[], int size , int k){
    cout << "Rotated Array is: " << endl;
    int arr_new[7] = {0};
    int j = size -1;
    int i = 0;
    int x = j-k+1;
    for(; i<k ; i++){
        cout << x << endl;
        arr_new[i] = arr[x]; 
        x++;   
    }
    // cout << i << endl;
    for (int n =0 ; n < (size-k); n++){
        arr_new[i] = arr[n];
        i++;
    }

    for (int i =0; i < size ; i++){
        cout << arr_new[i] << " ";
    }
    cout << endl;


}


void printArray(int arr[], int size){
    for (int i =0; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int size = 7; 
    printArray(arr, size);
    cout << endl;
    RotateArray(arr,size,3);
    cout << endl;

}