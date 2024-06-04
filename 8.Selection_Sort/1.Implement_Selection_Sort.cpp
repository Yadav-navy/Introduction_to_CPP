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
        mini = i; //considering first element as minimum kyuki agr isse choti valueexist krti
        for (int j = i ; j < size ; j++){  // hai to humme usse swap krna hoga correct value ke sath
            if (arr[j] < arr[mini]){        
                mini = j;  }
            }
        swap(arr[i],arr[mini]);
        }
    printArray(arr,5);
    cout << endl;

    
    }
    
