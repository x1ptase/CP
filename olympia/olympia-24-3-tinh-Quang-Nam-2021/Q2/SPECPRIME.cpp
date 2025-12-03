#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll n){
	if(n < 2) return 0;
	if(n % 2 == 0) return n == 2;
	for(ll i=3; i*i <= n; i+=2)
		if(n % i == 0) return 0;
	return 1;
}

int sumDigits(int n){
	int sum=0;
	while(n > 0){
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("SPECPRIME.INP", "r", stdin);
	freopen("SPECPRIME.OUT", "w", stdout);
	
	ll n; cin >> n;
	
	for(int i=2; i <= n; i++){
		if(isPrime(i) && isPrime(sumDigits(i))){
			cout << i << " ";
		}
	}
	
}
