#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,k;
    cin >> n >>k;
    string s;
    cin >> s;
    int ans=0;
    for(int i=0;i<n;i+=k){
        int se=0;
        int l=min(n,i+k);
        for(int j=i;j<l;j++){
            if(s[j]=='0'){
                se=1;
                break;
            }
        }
        if(!se)ans++;

    }
    cout <<ans<< endl;
    return;
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