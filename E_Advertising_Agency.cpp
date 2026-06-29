#include <bits/stdc++.h>
using namespace std;

#define int long long
int mod= 1e9 +7;
int s=1001;
int fact[1001]={0};
int invfact[1001]={0};
int modpow(int a ,int b){
    int res=1;
    while(b){
        if(b&1)res=(res*a)%mod;
        a=(a*a)%mod;
       b= b>>1;
    }
    return res;
}
void pre(){
    fact[0]=1;
    for(int i=1;i<s;i++){
        fact[i]=(fact[i-1]* i)%mod;
    }
    invfact[s-1]= modpow(fact[s-1],mod-2);
    for(int i=s-1;i>0;i--){
        invfact[i-1]=(invfact[i] *i )%mod;
    }
}

void solve(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    if(n==k){
        cout<<1<<endl;
        return;
    }
    if(n<k){
        cout<<0<<endl;
        return ;
    }
    sort(a.rbegin(),a.rend());
    int lb=a[k-1];
    int idx=1e9, freq=0;
    for( int i=0;i<n;i++){
        if(a[i]==lb){
            idx=min(i,idx);
            freq++;
        }
    }
    int sel=k -idx;
      cout<< (((fact[freq]*invfact[freq-sel])%mod)*invfact[sel])%mod<<"\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    pre();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}