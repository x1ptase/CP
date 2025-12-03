#include<iostream>
using namespace std;

int main(){
	int n, x;
	int max=-1, min=11;
	
	while(true){
		cin >> x;
		if(x == -1)
			break;
		if(x > max)
			max=x;
		if(min > x)
			min=x;
	}
	
	cout << max << " " << min;
}
