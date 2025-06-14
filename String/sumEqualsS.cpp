// tim mang con sao cho tong cac phan tu bang S

#include<bits/stdc++.h>
using namespace std;

int arr[200005];
int n, s;

void findSubArrayWithSumM(){
	int left=0, right=0, currentSum=0;
	// pos start, end, current sum of sub array
	
	while(right < n){
		currentSum+= arr[right];
		
		while(currentSum > s && left <= right){
			currentSum-=arr[left];
			left++;
		}
		
		if(currentSum == s){
			// print
			for(int i=left; i<=right; i++)
				cout<<arr[i]<<" ";
			cout<<"\n";
			return;
		}
		right++;
	}
	// if not exist subarray satisfied
	cout<<"no subarray with element = S";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin>>n>>s;
	for(int i=0; i<n; i++) cin>>arr[i];
	findSubArrayWithSumM();
	return 0;
}
