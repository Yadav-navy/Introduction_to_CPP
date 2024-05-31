#include<iostream>
using namespace std;

int main(){
    // int a;
    // cout<<"Enter the value of a"<<endl;
    // cin>>a;

    // if (a>0){
    //     cout<<"a is positive "<<endl;

    // }
    // else{
    //     if (a<0){
    //         cout<<"a is negative "<<endl;
    //     }
    //     else{
    //         cout<<"a is 0"<<endl;
    //     }
    // }

//     if (a>0){
//         cout<<"a is positive"<<endl;
//     }
//     else if (a<0){
//         cout<<"a is negative"<< endl;
//     }

//     else{
//         cout<<"a is zero"<<endl;
//     }
// 

    char a;
    cout<<"Enter the char value"<< endl;
    cin>>a;
   if (a>='a' and a <= 'z'){
        cout<<"a is lower case"<<endl;
    }
    else if (a>='A' && a<='Z'){
        cout<<"a is Upper case"<< endl;
    }

    else{
        cout<<"a is number"<<endl;
    }


}

