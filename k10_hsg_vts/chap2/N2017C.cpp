#include<iostream>

using namespace std;

void solve(){
	int d1, m1, y1;
    int d2, m2, y2; 

    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    
	if(y1 < y2){
        cout<<1;
    } else if(y1 > y2){
        cout<<-1;
    } else{
        if(m1 < m2){
            cout<<1;
        } else if(m1 > m2){
            cout<<-1;
        } else{
            if(d1 < d2){
                cout<<1;
            } else if(d1 > d2){
                cout<<-1;
            } else{
                cout<<0;
            }
        }
    }
}

int main(){
    solve();
    return 0;
}

