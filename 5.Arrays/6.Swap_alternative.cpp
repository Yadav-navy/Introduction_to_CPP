#include <iostream>
using namespace std;

void swap_alternative(int arr[],int size){
    for(int i =0; i< size ; i=i+2){
        if (i+1<size){
        swap(arr[i],arr[i+1]);

        }
    }
}

void printArray(int arr[],int size){
    for(int i =0;i< size ; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    printArray(arr,5);
    cout << endl;
    swap_alternative(arr,5);
    printArray(arr,5);
}