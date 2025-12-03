#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int arr[1000];
	for(int i=0; i< n; i++){
		cin>>arr[i];
	}
	
	bool foundOdd=false;
	bool foundEven=false;
	
	int max=-320000, min=320000;
	for(int i=0; i < n; i++){
		if(arr[i] > max && arr[i] % 2 != 0){
			max=arr[i];
			foundOdd=true;	
		}
		if(arr[i] < min && arr[i] % 2 == 0){
			min=arr[i];
			foundEven=true;
		}
	}
	
	if(foundOdd)
		cout<<max<<" ";
	else cout<<"Invalid ";
	
	if(foundEven)
		cout<<min<<" ";
	else cout<<"Invalid ";
		
	return 0;
}
