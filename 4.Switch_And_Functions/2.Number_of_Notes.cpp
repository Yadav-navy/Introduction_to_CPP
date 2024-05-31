#include<iostream>
using namespace std;

int main(){

    int amt;
    cout<< "Enter the amoumt"<<endl;
    cin>>amt;

    int hund;
    int fif;
    int twen;
    int ten;

    // int num=1;
    switch (1)
    {
    case 1:
        hund= amt/100;
        cout<<hund<<" Rs. 100 note required"<<endl;
        amt=amt-(hund*100);
    case 2:
       fif= amt/50;
        cout<<fif<<" Rs. 50 note required"<<endl;
        amt=amt-(fif*50);
    case 3:
        twen= amt/20;
        cout<<twen<<" Rs. 20 note required"<<endl;
        amt=amt-(twen*20);

    case 4:
        ten= amt/10;
        cout<<ten<<" Rs. 10 note required"<<endl;
        amt=amt-(ten*10);

}
cout<<endl;
cout<<"Amount Left is "<< amt << endl;
}