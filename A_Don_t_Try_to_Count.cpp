#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,m;
    cin >> n>>m;
    string x,s;
    cin>>x>>s;
    unordered_map<char,int>mp;
    for(char ch: x)mp[ch]++;
    for(char ch: s){ if(mp[ch]==0){cout<<-1<<endl; return ;}}
    int ans=0;
    while(ans<=5 && x.find(s)==string::npos){
        x=x+x;
        ans++;
    }
    if(x.find(s)!=string::npos)cout<<ans<<endl;
    else cout<<-1<<endl;
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