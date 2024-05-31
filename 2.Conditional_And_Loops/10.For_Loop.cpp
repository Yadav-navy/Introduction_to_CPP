#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter value of N"<<endl;
    cin>>n;
    int sum =0;

    for (int i=1;i<=n;i++){
        sum +=i;
    }
    cout <<sum<<endl;

    // int n;
    // cout<<"Enter value of N"<<endl;
    // cin>>n;

    // int i=1;

    // for (;;){
    //     if (i<=n){
    //         cout<<i<<endl;
    //     }
        
    //     else {
    //         break;
    //     }
    //     i++;
    // }
}