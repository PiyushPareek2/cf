#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int a,b,n;
    cin >> a >> b >> n;
    int sum=0;
    unordered_map<int,int> mp;
    
    for(int i=0;i<n;i++) {
        int x;
        cin >> x;
        mp[x]++;
    }   
    for(auto& [x,y]:mp){
        int val=x;
        if(val>=a)sum+=(a-1)*y;
        else sum+=y*val;
    }
 cout << sum+b<< endl;
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