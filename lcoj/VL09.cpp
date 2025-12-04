/*
*	S = x + x^2/2! + ... + x^n/n!
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    double x; int n;
    cin >> x >> n;

    double S=0, tu=x, mau=1; // i=1: x^1 / 1!
    for(int i = 1; i <= n; i++){
        if(i > 1){
            tu *= x;  
            mau *= i;
    	}
        S += tu / mau;
    }

    cout << fixed << setprecision(2) << S;
    return 0;
}


