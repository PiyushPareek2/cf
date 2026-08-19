#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    string s="";
    cin >> s;
    int n=s.size(),ab=0,ba=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='a' && s[i+1]!=s[i])ab++;
        if(s[i]=='b' && s[i+1]!=s[i])ba++;
    }
    if(ab==ba){
        cout<<s<<endl;
        return ;
    }
    if(ab>ba){
        s[0]='b';
    }
    else s[0]='a';
    cout<<s<<endl;
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