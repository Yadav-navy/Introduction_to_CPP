#include <iostream>
using namespace std;

int main(){
    int a =0;
    int b = 1;
    int count = 1;

    int n ;
    cout<< "Enter the value of N Number of elements"<<endl;
    cin>>n;
    for (;count<=n;count++){
        if (count==1){
            cout<<a<<endl;
            continue;
        }
        if (count==2){
            cout<<b<<endl;
            continue;
        }
        //cout <<count<<"th element of fibonnaci series"<<endl;
        int x=a+b;
        cout<<x<<endl;

        a=b;
        b=x;

    }
    cout<<"Value of count"<<count<<endl;
}