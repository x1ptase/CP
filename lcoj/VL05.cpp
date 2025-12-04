#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int S=0;
    int last=3*n + 1; // last number

    for(int i = 1; i <= last; i++){
        if(i % 2 == 0){
            S -= i; // even
        } else{
            if(i == last && n % 2 != 0){
                // last num and odd
                S -= i;
            } else{
				// other                 
                S += i;
            }
        }
    }

    cout << S;
    return 0;
}

