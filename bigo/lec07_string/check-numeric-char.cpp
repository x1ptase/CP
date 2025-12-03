#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int count=0;
    for(int i=0; i < s.length(); i++){
        if('0' <= s[i] && s[i] <= '9'){
            count++;
        }
    }
    cout << count;
    return 0;
}