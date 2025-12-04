#include<iostream>
using namespace std;

bool isPrime(int n){
	if(n < 2) return 0;
	if(n % 2 == 0) return n == 2;
	for(int i=3; i * i <= n; i+=2){
		if(n % i == 0) return 0;
	}
	return 1;
}

int checkPrime(int n){
	if(n < 2) return 0;
	for(int i=2; i * i <= n; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int n; cin >> n;
	if(isPrime(n)) 
		cout << "YES\n";
	else
		cout << "NO\n";
		
	if(checkPrime(n))
		cout << "CO\n";
	else cout <<"KHONG\n";
}
