#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, count=0; cin >> n;
    while(n--){
        int p, v, t;
        cin >> p >> v >> t;
        if(p+v+t>=2) count++;
    }
    cout << count << endl;
    return 0;
}

