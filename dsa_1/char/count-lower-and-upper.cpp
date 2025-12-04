#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char c[100];
	cin.getline(c, 100);
	
	int countLower=0;
	int countUpper=0;
	
	for(int i=0; i < strlen(c); i++){
		if('a' <= c[i] && c[i] <= 'z'){
			countLower++;
		}
		if('A' <= c[i] && c[i] <= 'Z'){
			countUpper++;
		}
	}
	
	cout << countLower << " " << countUpper;
	return 0;
}
