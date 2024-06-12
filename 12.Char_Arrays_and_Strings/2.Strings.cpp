#include<iostream>
using namespace std;

int main(){
    char ch[10];
    // cin >> ch;
    cin.getline(ch,100);
    cout << ch << endl;
    string s ;
    s = "Navneet Yadav";
    cout << s << endl;
    cout << s.size() << endl;
    cout << INT_MIN << endl;

    int arr[5] = {0};
    for (int i =0 ; i< 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    if (s.substr(1,3)=="av" ){
        cout << "equal" << endl;
        
    }
    cout << s.substr(2,3) << endl;
    s.erase(2,3);
    cout << s << endl;

    cout << s.find("Yad") << endl;
    }
