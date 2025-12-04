#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    bool flag=false;
    for(int i=b-1; i > a; i--){
        if(i % 3 == 0){
            cout << i << " ";
            flag=true;
        }
    }

    if(!flag)
        cout << "NOT FOUND";

    return 0;
}

