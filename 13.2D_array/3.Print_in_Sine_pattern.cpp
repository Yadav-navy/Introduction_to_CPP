#include<iostream>
using namespace std;

int main(){
    // int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout << "Give 2d array as input " << endl;
    int arr[4][3];
    for(int i = 0 ; i < 4 ; i++){
        for (int j = 0 ; j < 3 ; j++ ){
            cin >> arr[i][j] ;
        }
    }

    for(int i = 0 ; i < 4 ; i++){
        for (int j = 0 ; j < 3 ; j++ ){
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
    cout << "Row wise sum is " << endl;
    for(int i = 0 ; i < 4 ; i++){
        int sum = 0;
        for (int j = 0 ; j < 3 ; j++ ){
            sum = sum + arr[i][j];
        }
        cout<< sum << endl;
    }

    cout << "Sine Pattern Print" << endl;
    for(int j = 0 ; j < 3 ; j++){

        if ((j % 2) == 0){
            for (int i = 0 ; i < 4 ; i++){
                cout << arr[i][j] << " ";
                }
        }

        else{
            for (int i = 3 ; i >= 0 ; i--){
            cout << arr[i][j] << " ";}

        }
    }
    cout << endl;

    cout << "Number of Rows is "<< sizeof(arr)/sizeof(arr[0]) << endl;
    cout << "Number of Cols is "<< sizeof(arr[0])/sizeof(arr[0][0]) << endl;

}