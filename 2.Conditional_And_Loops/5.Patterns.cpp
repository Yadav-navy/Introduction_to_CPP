#include <iostream>
using namespace std;

int main(){

    // first question
    // int n;
    // cout<<"Enter value of n "<< endl;
    // cin>>n;

    // int i=0;


    // while (i<n){
    //     int j=0;
    //     while (j<n){
    //         cout<<"*"<<" ";
    //         j=j+1;
    //     }
    // cout<<"\n"<<endl;
    // i=i+1;
    // }

    // second question
    // int n;
    // cout<<"Enter value of n "<< endl;
    // cin>>n;

    // int i=0;


    // while (i<n){
    //     int j=0;
    //     int value = i;
    //     while (j<=i){
            
    //         cout<<value+1<<"";
    //         value-=1;

    //         j+=1;
    //     }

    //     i+=1;
    //     cout<<"\n";


    // }


    // Third question

    int n ;
    cout << "Enter the value of N"<<endl;
    cin>>n;

    int i=0;
    while (i<n){
        int j =0;
        while (j<n-i-1){
            cout<<" "<<" ";
            j+=1;
        }
        int z=0;
        while (z<i+1){
            cout<<"*"<<" ";
            z=z+1;
        }
        i=i+1;
        cout<<"\n";
    }
}