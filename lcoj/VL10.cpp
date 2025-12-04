#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string str; cin >> str;
	
	if(str[0] == '-'){
		cout << str.length() - 1;
	} else{
		cout << str.length();
	}
	
	return 0;
	
}
