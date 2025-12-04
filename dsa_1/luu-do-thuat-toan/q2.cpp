/*
* S(n) = 1^2 + 2^2 + ... + n^2
*/
#include<iostream>

int main(){
    int n; std::cin >> n;
    int sum=0;

    for(int i=0; i <= n; i++){
        sum += i*i ;
    }

    std::cout << sum;
    return 0;
}
