#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int arr[6]={1,2,2,3,1,4};
    unordered_map<int,int> element_count;

    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i < size; i++){
        element_count[arr[i]]++;
    }
    for (const auto &pair : element_count) {
        cout << "Element " << pair.first << " occurs " << pair.second << " times." << endl;
    }


}