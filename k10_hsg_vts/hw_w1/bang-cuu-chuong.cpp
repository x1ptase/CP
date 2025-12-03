#include<bits/stdc++.h>
using namespace std;

int main(){
	for(int j=1; j <= 10; j++){
		for(int i=2; i <= 9; i++){
			cout << i << "x" << j << "=" << i*j;
			if(i != 9) cout << "\t";
		}
		cout << endl;
	}
		
	return 0;
}



