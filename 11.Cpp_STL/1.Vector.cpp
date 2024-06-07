#include <iostream>
using namespace std;
#include <vector>

int main(){
    cout << endl;
    vector <int> v;
    cout << "Intial Capacity when no element " << v.capacity() << endl;
    v.push_back(1);
    cout << "After pushing one element "<< v.capacity() << endl;

    v.push_back(2);
    cout << "After pushing second element "<< v.capacity() << endl;

    v.push_back(3);
    cout << "After pushing third element "<< v.capacity() << endl;

    cout << "Size "<< v.size() << endl;

    cout << v.front() << endl;
    cout << v.back() << endl;

    // Another method of printing the elements of array
    for (auto i:v){
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    for (int i:v){
        cout << i << " ";
    }
    cout << endl;
    
    cout << endl;
}