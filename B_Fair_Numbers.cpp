#include <bits/stdc++.h>
using namespace std;

#define int long long
bool isfair(int n){
    int cp=n;
    vector<int> dp(10,0);
    while(cp){
        int rem=cp%10;
        cp/=10;
        dp[rem]++;
    }
    for(int i=1;i<=9;i++){
        if(!dp[i])continue;
        else if(n%i)return false;
    }
    return true;
}
void solve(){
    int n;
    cin >> n;
    for(;1;n++){
        if(isfair(n))break;
    }
    cout <<n<< endl;
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