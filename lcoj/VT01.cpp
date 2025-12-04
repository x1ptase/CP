#include<iostream>
#define MAX 1000
using namespace std;

int main(){
	int n; cin >> n;
	int arr[MAX];
	for(int i=0; i < n; i++){
		cin >> arr[i];
	}
	
	int max=arr[0];
	for(int i=0; i < n; i++){
		if(arr[i] > max)
			max=arr[i]; 
	}
	
	cout << max;
	return 0;
}
