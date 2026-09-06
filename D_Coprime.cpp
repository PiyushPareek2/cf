#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    vector<int> focc(1001,1e9);
    vector<int> locc(1001,-1);
    for(int i=0;i<n;i++){
        focc[a[i]]=min(focc[a[i]],i);
    }
    for(int i=n-1;i>=0;i--){
        locc[a[i]]=max(locc[a[i]],i);
    }
   sort(a.begin(), a.end());
   a.erase(unique(a.begin(), a.end()), a.end());
    n=a.size();
    int ans=-1;
    if(locc[1]!=-1)ans=locc[1]*2;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(gcd(a[i],a[j])==1){
                ans=max(ans,locc[a[i]]+focc[a[j]]+2);
                ans=max(ans,locc[a[j]]+locc[a[i]]+2);
            }
        }
    }
    cout<<ans<<endl;
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