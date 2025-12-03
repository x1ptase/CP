#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long x){
	if(x < 2) return 0;
	if(x % 2 == 0) return x==2;
	for(long long i=3; i*i <= x; i+=2){
		if(x % i == 0) return 0;
	}
	return 1;
}

int main(){
	long long n; cin>>n;
	long long arr[10000];
	for(long long i=0; i < n; i++){
		cin>>arr[i];
	}
	
	long long sum=0;
	for(long long i=0; i < n; i++){
		if(isPrime(arr[i])){
			sum+=arr[i];
		}
	}
	
	cout<<sum;
	return 0;
}
