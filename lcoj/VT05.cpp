#include<bits/stdc++.h>
#define MAX 10000
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	
	int n, x; cin >> n >> x;
	int arr[MAX];
	for(int i=0; i < n; i++)
		cin >> arr[i];
		
	int count=0;
	for(int i=0; i < n; i++){
		if(x == arr[i])
			count++;
	}
	
	cout << count;
	return 0; 
}
