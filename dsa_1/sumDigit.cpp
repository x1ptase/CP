#include<iostream>
using namespace std;

int sumDigit(int x){
	int sum=0;
	while(x > 0){
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

int main(){
	int n; cin >> n;
	cout << sumDigit(n);
	return 0;
}
