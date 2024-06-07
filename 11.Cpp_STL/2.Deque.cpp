#include <iostream>
using namespace std;
#include <deque>

int main(){
    deque<int> d;
    
    d.push_back(1);
    d.push_front(2);

    for (int i =0; i < d.size(); i++){
        cout << d[i] << " ";
    }
    cout << endl;

    d.pop_front();

    for (int i =0; i < d.size(); i++){
        cout << d[i] << " ";
    }
    cout << endl;

    cout << d.empty() << endl;

}



