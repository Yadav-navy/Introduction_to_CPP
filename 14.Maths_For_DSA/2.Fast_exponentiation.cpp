#include<iostream>
using namespace std;

int fast_exponetiation(int a , int b){
    int res =  1;
    while (b > 0){
        if (b & 1){ // if b is odd
            res = res * a;
        }
        a = a * a;
        b = b>>1;
    }
    return res;
}

int main(){
    int a ;
    int b ;
    cout << "Enter the numbers " << endl;
    cin >> a;
    cin >> b;
    cout << "ans is : "<< fast_exponetiation(a,b) << endl;

}