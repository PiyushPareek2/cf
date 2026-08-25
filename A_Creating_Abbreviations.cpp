#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,m;
    cin >> n >> m;
    int mp[26]={0};
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        mp[s[0]-'a']++;
    }
    bool flag=true;
    for(int i=0;i<m;i++){
        string s;
        cin >> s;
        if(flag)
        for(char ch : s)
        if(!mp[ch-'A']){
            flag=false;
        }
    }
    if(flag)
    cout <<"YES"<< endl;
    else cout<<"NO"<<endl;
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