#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n "<<endl;
    cin>>n;

    int i=1;
    int sum =0;

    while (i<=n){
        sum=sum+i;
        i=i+1;

    }
    cout<<"sum of n natural numberes is "<<sum<<endl;
}