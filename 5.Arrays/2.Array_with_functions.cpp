#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    for (int i =0; i<size ; i++){
        cout<< arr[i] << endl;
    }
}

int main(){
    int arr[3]={1,3,5};
    int size =6;
    cout<<"size of array is "<< sizeof(arr)/sizeof(int) << endl;
    printArray(arr,size);
}