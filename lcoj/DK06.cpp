#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int a, b;
	double x;
	cin >> a >> b;
	
	if(a == 0){
		if(b == 0){
			cout << "WOW";
		} else{
			cout << "NO";
		}
	} else{
		x=-(double)b/a;
		cout << fixed << setprecision(2) << x;
	}
	
	return 0;
}



