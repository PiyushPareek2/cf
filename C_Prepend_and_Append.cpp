#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,k,ans=0;
    cin >> n ;
    string s="";
    cin >> s;
    int l=0,r=n-1;
    while(l<r){
        if(s[l]!=s[r]){
            l++;
            r--;
        }
        else {
            ans=r-l+1;
            break;
        }
    }
    ans=r-l+1;

    cout<<ans<<endl;
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