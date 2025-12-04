#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    string n; cin >> n;
    int i=n.size() - 1;

    // remove 0
    while(i >= 0 && n[i] == '0') i--;

    // reserve
    for(; i >= 0; i--) cout << n[i];
    return 0;
}

