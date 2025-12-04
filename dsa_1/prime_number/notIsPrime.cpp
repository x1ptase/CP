#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n < 2) return 0;
	if(n % 2 == 0) return n == 2;
	for(int i=3; i * i <= n; i += 2){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int L, R; cin >> L >> R;
	
	int count=0;
	for(int i=L; i <= R; i++){
		if(!isPrime(i))
			count++;	
	}
	
	cout << count;
	return 0;
}
