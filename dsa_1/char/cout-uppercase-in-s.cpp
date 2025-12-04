#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char c[100];
	cin.getline(c, 100);
	
	int count=0;
	for(int i=0; i < strlen(c); i++){
		if('A' <= c[i] && c[i] <= 'Z'){
			count++;
		}
	}
	cout << count;
	return 0;
}
