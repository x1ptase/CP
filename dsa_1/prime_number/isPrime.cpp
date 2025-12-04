#include<bits/stdc++.h>
using namespace std;
using ll=long long;

bool isPrime(ll n){
    if(n < 2) return 0;
    if(n % 2 == 0) return n == 2;
    for(ll i = 3; i * i <= n; i += 2)
        if(n % i == 0) return 0;
    return 1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n; cin >> n;
    cout << (isPrime(n) ? "YES" : "NO");
}

