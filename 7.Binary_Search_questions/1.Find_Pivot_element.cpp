#include <iostream>
using namespace std;

int Pivot(int arr[], int size ){

    cout << endl;

    int start = 0 ;
    int end = size - 1;
    int mid = (start)+(end-start) /2;
    
    while (start < end){
        mid = (start)+(end-start) /2;
        if (arr[mid] > arr[0] ){
            start = mid + 1;
        }

        else if (arr[mid] < arr[0]){
            end = mid;
        }
        }

        return start;
    }

    


int main(){
    int arr1[6] = {1,2,3,7,9};
    int size = 5;
    int ans = Pivot(arr1, size);
    cout << "Pivot is "<<ans << endl;

    cout << endl;
}