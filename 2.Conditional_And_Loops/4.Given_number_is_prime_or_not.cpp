#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter value of n "<<endl;
    cin>>n;

    int i=2;
    bool flag=true;

    while (i <n){

        if (n % i==0) {
            cout<<"Number is not Prime"<<endl;
            flag= false;
            break;
        }
        else{
            i=i+1;
        }
    }
    
    if (flag==true){
        cout<<n<<" is a prime number"<<endl;
    }
    else{
        cout<<n<<" is not a prime number"<<endl;
    }
}