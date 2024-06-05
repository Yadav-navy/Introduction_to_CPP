#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i =0; i < size; i++){
        cout << arr[i] << " ";    
    }
    cout << endl;
}


int main(){
    cout << endl;

    int arr [5] = { 64, 25, 12, 22, 11};
    int size = 5;
    cout << "Original array "<< endl;
    printArray(arr, size);
    int swap_count;

    //bubble sort
    for (int i =0; i < size-1 ; i++){
        swap_count = 0;
        for (int j = 0 ; j < (size-i)-1; j++ ){
            if (arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                swap_count++;}
            }

        if (swap_count == 0){
                break;}
        printArray(arr,size);
        }

    cout<< endl;
    cout << "Sorted Array" << endl;
    printArray(arr , size);

    cout << endl;
}