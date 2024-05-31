#include <iostream>
using namespace std;

int main(){
    int arr[4]={1,2,3,4};
    int arr_1[4];
    
    int size =sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i< size; i++){
        arr_1[size-i-1]=arr[i];
    }
    for (int i =0 ; i < size ; i++){
        // cout << arr[i] << " "
        cout << arr_1[i] << " ";
    }
}