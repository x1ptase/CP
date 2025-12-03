#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    char list[8]={'B', 'I', 'G', 'O', 'b', 'i', 'g', 'o'};

    bool flag=false;
    for(int i=0; i < s.length(); i++){
        for(int j=0; j < 8; j++){
            if(s[i] == list[j]){
                flag=true;
                break;
            }
        }
    }

    if(flag) cout << "YES";
    else cout << "NO";


}