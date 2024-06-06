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
    
    for (int i = 1; i < size; i++){
        int j = i - 1;
        int temp = arr[i];
        for( ; j>= 0; j--){
            if (temp < arr[j]){
                arr[j+1] = arr[j];
            }
            else{
                break;    //if already sorted previous part temp < arr[j]
            }
        }
        arr[j+1] = temp;
        // cout << "Iteration " << j << " " ;
        // printArray(arr , size );
    }
    printArray(arr, size);

    cout << endl;

}