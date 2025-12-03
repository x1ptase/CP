#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, k;
	cin >> n >> k;
	
	long long q=n/k;
	long long r=n%k;
	
	cout << q << " " << r;
	return 0;
}
