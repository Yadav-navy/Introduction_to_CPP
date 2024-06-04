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
    int mini = INT_MAX;

    for (int i =0 ; i < (size-1) ; i++){
        mini = INT_MAX;
        int mini_j = -1;
        for (int j = i ; j < size ; j++){
            if (arr[j] < mini){
                mini = arr[j];
                mini_j = j;  }
            }
        swap(arr[i],arr[mini_j]);
        }
    printArray(arr,5);
    cout << endl;

    
    }
