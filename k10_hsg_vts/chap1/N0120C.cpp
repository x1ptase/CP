#include<bits/stdc++.h>
using namespace std;

int main(){
    long long m, n;
    cin >> m >> n;

    long long I=(n*(n-1))/2 + m*(m-1) + 2*m*n;
    cout << I;

    return 0;
}

