#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter the value of N"<< endl;
    cin >>n;

    int i=0;
    while (i<n){
        //for space
        int j=0;
        while (j<n-i-1){
            cout<<" "<<" ";
            j+=1;
        }
        //for first triangle
        int y=0;
        int value=1;
        while (y<i+1){
            cout<<value<<" ";
            y+=1;
            value+=1;
        }
        int z=0;
        int value_2=i;
        while (z<i){
            
            cout<<value_2<<" ";
            value_2-=1;
            z+=1;
        }

        i+=1;
        cout<<"\n";

    }
}