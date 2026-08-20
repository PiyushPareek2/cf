#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    int op=0;
    while(n!=1){
        if(n%3){
            cout<<-1<<endl;
            return;
        }
        if(n%2){op++;n=n*2;}
        op++;
        n=n/6;
    }
    cout <<op<< endl;
    return ;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}