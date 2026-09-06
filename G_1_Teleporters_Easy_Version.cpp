#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,c;
    cin >> n >> c;
    vector<int> a(n);
    for(int i=1;i<=n;i++) {
        int val;
        cin >> val;
        val+=i;
        a[i-1]=val;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
       if(c<a[i]){cout<<i<<endl;return ;}
       c-=a[i]; 
    }
    cout <<n<< endl;
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