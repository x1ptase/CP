#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("CHIAHET3.INP", "r", stdin);
    freopen("CHIAHET3.OUT", "w", stdout);

    long long n;
    cin >> n;

    if(n % 3 == 0) cout << "YES";
    else cout << "NO";

    return 0;
}

