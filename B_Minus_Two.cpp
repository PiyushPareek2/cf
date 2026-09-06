#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int mx=1,od=0,m4=0,m2=0;
    for(int i: a){
        if(i%2)od++;
        else{
            if(i%4==0){
                m4++;
            }
            else m2++;
        }
    }
    mx=max({od,m4,m2});
    cout <<mx << endl;
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