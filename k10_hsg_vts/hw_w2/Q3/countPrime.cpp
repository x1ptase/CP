#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n < 2) return 0;
	if(n % 2 == 0) return n==2;
	for(int i=3; i*i <= n; i+=2){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int n; cin>>n;
	int arr[1000];
	for(int i=0; i < n; i++){
		cin>>arr[i];
	}
	
	int count=0;
	for(int i=0; i < n; i++){
		if(isPrime(arr[i])){
			count++;
			cout<<arr[i]<<" ";
		}
	}
	
	cout<<endl;
	cout<<count;
	
	return 0;
}
