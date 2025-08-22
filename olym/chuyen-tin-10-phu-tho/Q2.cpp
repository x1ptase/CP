#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2; i*i<=n; i++)
        if(n%i==0) return false;

    return true;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int L, R; cin >> L >> R;
    int count=0;

    for(int i=L; i<=R; i++)
        if(!isPrime(i)) count++;

    cout << count << endl;
    return 0;
}



