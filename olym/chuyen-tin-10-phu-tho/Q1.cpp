#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int x; cin >> x;
    long long cost=0;

    if(x<=100) cost=x*450;
    else if(x>100 && x<=150)
        cost=100*450+(x-100)*750;
    else if(x>150)
        cost=100*450+50*750+(x-100)*950;

    cout << cost << endl;
    return 0;
}
