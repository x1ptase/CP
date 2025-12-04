#include<bits/stdc++.h>
using namespace std;

int nCk(int n, int k){
    if(k > n) return 0;
    if(k > n - k) return k=n-k;
    int res=1;
    for(int i=1; i <= k; i++){
        res=res*(n-i+1) / i;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k; cin >> n >> k;

    cout << nCk(n, k);
    return 0;
}