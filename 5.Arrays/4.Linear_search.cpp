#include <iostream>
using namespace std;

bool linear_search(int ele ,int arr[], int size){
    for (int i =0; i< size ; i++){
        if(arr[i]==ele){
            return true;
        }
    }
    return false;
}

int main(){
    int size;
    cout << "Enter the size of arr" << endl;
    cin >> size ;

    int arr[100];
    cout << "Enter the elements of array" << endl;
    for(int i =0; i<size ; i++){
        cin >> arr[i];
    }
    int ele;
    cout << "Enter the element you want to search" <<  endl;
    cin >> ele;
    bool found=linear_search(ele, arr, size);
    if (found){
        cout << "Element present in arr" << endl;
    }
    else {
        cout << "Element not present in arr" << endl;
    }


}