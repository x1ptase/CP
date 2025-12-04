#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(int x){
	if(x < 2) return 0;
	if(x % 2 == 0) return x == 2;
	for(ll i=3; i*i <= x; i += 2){
		if(x % i == 0) return 0;
	}
	return 1;
}

int sumDigit(int x){
	int sum=0;
	while(x > 0){
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n; cin >> n;
	for(int i=2; i <= n; i++){
		if(isPrime(i) && isPrime(sumDigit(i))){
			cout << i << " ";
		}
	}	
	return 0;
}
