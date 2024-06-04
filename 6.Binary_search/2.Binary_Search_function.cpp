#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size , int target){

    cout << endl;

    int start = 0 ;
    int end = size - 1;
    int mid = (start)+(end-start) /2;
    
    while (start <= end){
        mid = (start)+(end-start) /2;
        if (arr[mid] == target ){
            return mid;
        }

        else if (target > arr[mid]){
            start = mid +1;
        }

        else if ( target < arr[mid] ){
            end = mid -1;
        }
        }
        return -1;
    }

    


int main(){
    int arr1[6] = {5,7,7,8,8,10};
    int size = 6;
    int target = 18;
    int ans = BinarySearch(arr1, size, target);
    cout << "Index of "<< target<<" is "<<ans << endl;

    cout << endl;
}