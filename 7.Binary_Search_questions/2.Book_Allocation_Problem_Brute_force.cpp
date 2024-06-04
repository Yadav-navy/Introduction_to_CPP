#include <iostream>
using namespace std;


int main(){
    cout << endl;

    int arr[4]={12, 34, 67, 90};
    int s = 2;
    int size = 4;
    int s_1;
    int s_2 = 0;
    int total=0;
    int pages;
    int final = INT_MAX;

    for (int i =0; i<size; i ++){
        total += arr[i];
    }
    cout << "Total Pages is "<< total << endl;


    for (int i =0; i<size-1; i ++){
        s_1 = 0;
        s_2 = 0;
        for (int j = i+1; j<size ; j++){
            s_2 += arr[j];
            s_1 = total - s_2;
            
        }
        cout << i << " "<< s_1 << " "<< s_2 << " "<< endl;
        pages = max(s_2,s_1);
        final = min(pages,final);

    }
    cout << final<< " "<< total - final << endl;
    cout << endl;
}