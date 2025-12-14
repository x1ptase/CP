#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector<string>words(n);
    for(int i=0; i<n; ++i)
        cin >> words[i];


    for(int i=0; i<n; ++i){
        string w=words[i];
        if(w.length()>10)
            cout << w[0] << w.length()-2 << w[w.length()-1] << endl;
        else
            cout << w << endl;
    }
}
