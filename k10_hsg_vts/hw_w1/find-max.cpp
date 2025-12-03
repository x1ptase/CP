#include<bits/stdc++.h>
using namespace std;

int findMax(int a, int b, int c){
	int max=a; 
	if(b > max) max=b;
	if(c > max) max=c;
	
	return max;
}

int main(){
	int a, b, c; cin >> a >> b >> c;

	cout << findMax(a, b, c);
	return 0;
}
