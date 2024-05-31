#include<iostream>
using namespace std;

int main(){
    cout << endl;
    int arr[5] = {3,5,9,13,27};
    int target = 100;
    int size = 5;

    bool flag = 0;
    int start = 0;
    int end = size -1;

    while (start <= end ){
        int mid = (start+end) /2;
        cout << start<< mid<< end << endl;
        if (target == arr[mid]){
            cout << "Element is present at: " <<  mid;
            flag =1 ;
            break;
        }
        else if (target > arr[mid] ){
            start = mid +1;
        }
        else if(target < arr[mid] ){
            end = mid -1 ;
        }
    }
    if (not flag){
        cout << "Element is not present" << endl;
    }
    cout << endl;
}