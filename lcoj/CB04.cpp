#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	if(b == 0){
		cout << "ERROR";
	} else{
		cout << fixed << setprecision(2) << (double)a / b;
	}
	
	return 0;
}

