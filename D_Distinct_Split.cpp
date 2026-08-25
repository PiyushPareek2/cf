#include <bits/stdc++.h>
using namespace std;



void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int mx=1;
    int dp[n+1]={1};
    int mp[26]={0};
    for(int i=n-1;i>=0;i--){
        if(mp[s[i]-'a'])dp[i]=dp[i+1];
        else{
            mp[s[i]-'a']++;
            dp[i]=dp[i+1]+1;
        }
    }
    dp[n]=-26;
    int mpn[26]={0};
    int cnt=1;
    mx=max(mx,1+dp[1]);
    mpn[s[0]-'a']=1;
    for(int i=1;i<n;i++){
        if(mpn[s[i]-'a'])mx=max(mx,cnt+dp[i+1]);
        else{
            mpn[s[i]-'a']++;
            cnt=cnt+1;
            mx=max(mx,cnt+dp[i+1]);
        }
    }
    cout <<mx<< endl;
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