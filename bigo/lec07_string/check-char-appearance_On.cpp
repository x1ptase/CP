#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	getline(cin, s);
	
	unordered_set<char> list={'B','I','G','O','b','i','g','o'};

    for(char c : s){
        if(list.count(c)){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
