#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    string s;
    cin >> s;
    int n=s.size();
    int mp[26]={0};
    for(int i=0;i<n;i++){
     mp[s[i]-'a']++; 
     }
     int mx=0;
     for(int i : mp){
        mx=max(mx,i);
     }
     int cnt=0;
     for(int i: mp){
        if(i)cnt++;
        if(!i || i==mx || i==mx-1)continue;
        cout<<"NO"<<endl;
        return;
     }
     int len= cnt;
     for(int i=len;i<n;i++){
        if(s[(i-len)]!=s[i]){
            cout<<"NO"<<endl;
            return;
        }
     }
    
    cout <<"YES"<< endl;
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