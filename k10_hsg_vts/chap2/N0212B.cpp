#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a, b; cin>>a>>b;
	long long x=a*b;
	long long P=abs(x)%100;
	
	if(P % 3 == 0) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
