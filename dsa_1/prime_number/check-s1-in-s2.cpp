#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char list[2]={'A', 'a'};
	char c[100];
	cin.getline(c, 100);
	
	bool flag=false;
	for(int i=0; i < strlen(c); i++){
		for(int j=0; j < 2; j++){
			if(c[i] == list[j]){
				flag=true;
				break;
			}
		}
	}
	
	if(flag)
		cout << "YES";
	else
		cout << "NO";

	
	return 0;
}
