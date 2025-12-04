#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPerfect(ll n){
    if(n < 2) return false;
    ll sum=0;
    for(ll i = 1; i < n; i++)
        if (n % i == 0) sum += i;
    return sum == n;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    cout << (isPerfect(n) ? "YES" : "NO");
    return 0;
}

