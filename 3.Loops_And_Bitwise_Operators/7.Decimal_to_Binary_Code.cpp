#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int last_bit;
    int ans=0;
    int i =0;
    while (n!=0){
        last_bit =n&1;
        ans=(last_bit*pow(10,i))+ans;

        // cout<<last_bit<<endl;
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
    
}