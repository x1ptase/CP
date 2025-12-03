#include<iostream>
using namespace std;

int main(){
	int x; cin >> x;
	int index=0;
	
	index+=x%10;
	x/=10;
	
	index+=x%10;
	x/=10;
	
	index+=x%10;
	x/=10;
	
	index+=x%10;
	
	cout << index%10;
	return 0;
}
