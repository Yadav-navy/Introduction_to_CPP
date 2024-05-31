#include <iostream>
using namespace std;

int getmin(int arr[] ,int size){
    int min = INT_MAX;
    for(int i =0; i<size; i++){
        if (arr[i]<min){
            min = arr[i];
        }
    }
    return min;

}

int getmax(int arr[] ,int size){
    int max = INT_MIN;
    for(int i =0; i<size; i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    return max;

}

int main(){
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;

    int arr[100]; //declaration with maximum number of elements that it can contain
    cout<< "enter the elements of int array"<< endl;
    for (int i =0 ; i<size ; i++){
        cin >> arr[i];

    }

    cout << "Min value " << getmin(arr,size) << endl;
    cout << "Max value " << getmax(arr,size) << endl;
}