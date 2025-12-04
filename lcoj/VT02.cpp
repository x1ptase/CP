#include<iostream>
#define MAX 10000
using namespace std;

int main(){
    int n; cin >> n;
    int arr[MAX];
    for(int i=0; i < n; i++){
		cin >> arr[i];
	}

    int max1=arr[0], max2=-1000000000; 
    for(int i=0; i < n; i++){
        if(arr[i] > max1){
            max2=max1;
            max1=arr[i];
        } else if(arr[i] > max2 && arr[i] < max1){
            max2=arr[i];
        }
    }

    if(max2 == -1000000000) 
		cout << "NOT FOUND";
    else 
		cout << max2;

    return 0;
}

