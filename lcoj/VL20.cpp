#include<iostream>
#include<string.h>
using namespace std;

char toUpperCase(char x){
	if('a' <= x && x <= 'z')
		return x - 32;
	return x;
}

int main(){
	char a, b; cin >> a >> b;
	
	for(char i=a; i <= b; i++){
		cout << toUpperCase(i) << " ";
	}
	return 0;
}
