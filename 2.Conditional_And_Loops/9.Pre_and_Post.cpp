#include<iostream>
using namespace std;

int main(){
    int a=1;
    int b=2;
    if (a-->0 && b>1 ){
        cout<<"Stage I inside IF"<<endl;
    }
    else{
        cout<<"Stage II inside ELSE"<<endl;
    }

    cout << a << " "<<b << endl;
}