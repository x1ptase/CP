#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, Q; cin >> N >> Q;

    vector<int> A(N);
    for(int i=0; i<N; i++)
        cin >> A[i];

    vector<int> result;
    while(Q--){
        int x;
        cin >> x;

        int count=0;
        for(int i=0; i<N; i++)
            if(A[i]>x) count++;

        result.push_back(count);
    }

    for(int res: result)
        cout << res << endl;

    return 0;
}
