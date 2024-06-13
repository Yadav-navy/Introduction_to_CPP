#include<iostream>
using namespace std;

int gcd(int a , int b){
    if (a == 0)
        return b;

    if (b == 0)
        return a;
    
    while (a != b){
        if (a > b){
            a = a - b;
        }
        else{
            b = b - a ;
        }
        return a;
    }
}

int main(){
    int a ;
    int b;
    cout << " Enter two numbers " << endl;
    cin >> a;
    cin >> b;

    int ans ;
    ans = gcd(a,b);

    cout <<"GCD is "<< ans << endl;
}

//  But I don't think so it is correct because it does not give correct output when two numbers 
// are not the factors of each other