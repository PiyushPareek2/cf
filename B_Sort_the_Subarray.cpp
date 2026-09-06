#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    vector<int> b(n);
    for(auto &x : b) cin >> x;
    int l=0,r=n-1;
    while(l<n && a[l]==b[l])l++;
    if(l==n){
        cout<<1<<" "<<n<<endl;
        return;
    }
    while(r>=0 && a[r]==b[r])r--;
    while(l>0 && b[l]>=b[l-1])l--;
     while(r<n-1 && b[r]<=b[r+1])r++;
    cout <<l+1<<" " <<r+1<< endl;
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