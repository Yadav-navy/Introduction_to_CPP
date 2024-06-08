#include <iostream>
using namespace std;

int getlength(char name[]){
    int count = 0;
    for (int i = 0 ; name[i] != '\0' ; i++ ){
        count++;
    }
    return count;
}


void reverse(char name[], int size){
    int s = 0;
    int e = size -1 ;
    while (s < e){
        swap(name[s], name[e]);
        s++;
        e--;
    }
}


int main(){
    char ch[20];
    cout << "Enter the Name " << endl;
    cin >> ch;
    cout << ch << endl;;

    cout << sizeof(ch) << endl;
    cout << ch[6] << endl;
    int size = getlength(ch);
    cout << "Length of String is "<< size << endl;

    cout << isalnum(ch[4]) << endl;
    ch[0] = tolower(ch[0]);
    // cout << tolower(ch[0]) << endl;
    cout << ch << endl;

    reverse(ch,size);
    cout << "Reversed String is " << ch << endl;


}