#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,k;
    cin >> n >> k;
    string s="";
    cin >> s;
    if(k>=n){cout <<"NO"<< endl;return ;}
    int mp[26]={0};
    for(char ch : s)mp[ch-'a']+=1;
    int odd=0,even=0;
    for(int i: mp){
        if(!i)continue;
        if(i%2)odd++;
        else even++;
    }
    if(odd)
    k= k-(odd-1);
    if(k<0){cout <<"NO"<< endl;return ;}
    if(k%2==0 ||  (n%2==0)){cout <<"YES"<< endl;return ;}
    if(odd){cout <<"YES"<< endl;return ;}
    cout <<"NO"<< endl;
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