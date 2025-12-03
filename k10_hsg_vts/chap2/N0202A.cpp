#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b; cin>>a>>b;
	if(b == 0) cout<<"-1";
	else if(a % b == 0) cout<<"YES";
	else if(a % b != 0) cout<<"NO";
	
	return 0;
}
