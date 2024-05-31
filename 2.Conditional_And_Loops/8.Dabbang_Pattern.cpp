#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of N"<< endl;
    cin>>n;

    int i=0;
    while (i<n){
        int a =0;
        int val_1=1;
        while (a<n-i){
            cout<<val_1<<" ";
            a+=1;
            val_1+=1;
        }
        int b=0;
        while (b<i){
            cout<<"*"<<" ";
            b+=1;
        }
        int d=0;
        while (d<i){
            cout<<"*"<<" ";
            d+=1;
        }

        int c=0;
        int val_2=n-i;
        while (c<n-i){
            cout<<val_2<<" ";
            val_2-=1;
            c+=1;
        }

        i+=1;
        cout<<"\n";
    }
    
}