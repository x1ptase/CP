#include<iostream>
#include<math.h>
using namespace std;

int main(){
	long long n, k;
	cin >> n;
	
	k=sqrt(n);
	if(k * k == n)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
