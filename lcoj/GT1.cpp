#include<iostream>
using namespace std;

int main(){
	int n, gt=1;
	cin >> n;
	for(int i=1; i <= n; i++)
		gt*=i;  // gt = gt * i
	cout << gt;
}
