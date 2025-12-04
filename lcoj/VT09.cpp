#include<iostream>
using namespace std;

bool isPrime(int x){
    if(x < 2) return 0;
    if(x % 2 == 0) return x == 2;
    for(int i = 3; i*i <= x; i+=2){
        if(x % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n; cin >> n;
    bool mark[1001]={0};
    
    for(int i=0; i < n; i++){
        int x; cin >> x;
        if(isPrime(x)) {
            mark[x]=true;
        }
    }
    
    for(int i=2; i <= 1000; i++){
        if(mark[i]) cout << i << " ";
    }
    return 0;
}

