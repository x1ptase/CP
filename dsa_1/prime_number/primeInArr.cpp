#include<iostream>
using namespace std;

bool isPrime(int x){
	if(x < 2) return 0;
	if(x % 2 == 0) return x == 2;
	for(int i=3; i * i <= x; i += 2){
		if(x % i == 0) return 0;
	}
	return 1;
}

int main(){
	int n; cin >> n;
	int arr[1000];
	for(int i=0; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i=0; i < n; i++){
		if(isPrime(arr[i]))
			cout << arr[i] << " ";
	}
	
	return 0;
}
