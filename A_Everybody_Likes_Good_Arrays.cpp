#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    int op=0;
    int prev;
    cin >> prev;
    for(int i=1;i<n;i++){
        int cur;
        cin >> cur;
        if(cur%2 == prev%2)op++;
        prev=cur;
    }
    cout<<op<<endl;
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