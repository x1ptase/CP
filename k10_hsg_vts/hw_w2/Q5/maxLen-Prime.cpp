/**
* maximum consecutive segments: doan con lien tiep lon nhat
*/

#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

bool isPrime(long long n){
	if(n < 2) return 0;
	if(n % 2 == 0) return n==2;
	for(long long i=3; i*i <= n; i+=2){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
    long long n; cin>>n;
    long long arr[MAX]; 
	for(long long i=0; i < n; i++){
		cin>>arr[i];
	}

    long long maxLen=0, currentLen=0;

    for(long long i=0; i < n; i++){
        if(isPrime(arr[i])){
            currentLen++;
           	if(currentLen > maxLen)
                maxLen=currentLen;
        } else {
            currentLen=0;
        }
    }

    cout<<maxLen;
    return 0;
}

