/*
 * Nếu 1 số chia hết cho 10 thì chữ số cuối cùng của số đó luôn là số 0
 * */

#include<iostream>
using namespace std;

int main(){
    int i=1;
    do{
        if(i % 10 == 0)
            cout << i << " ";
        i++;
    } while(i <= 1000);
}