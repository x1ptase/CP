#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;

    if(n < 3){
        cout << 0; 
        return 0;
    }

	long long res=1;
	for(int i=1; i <= 3; i++){
		res=res*(n-i+1) / i;
	}
    cout << res;

    return 0;
}

