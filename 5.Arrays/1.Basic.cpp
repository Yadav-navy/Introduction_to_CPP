#include<iostream>
using namespace std;


int main(){
    int arr[4]={1,5,3,66};

    cout << sizeof(arr)/sizeof(arr[0]) << endl;

    cout << arr[-1] << endl;
    for(int i=0 ; i<4; i++){
        cout << arr[i]+1 << endl;
    }

    }