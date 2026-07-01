#include <bits/stdc++.h>
using namespace std;

#define int long long

int mod=1e9 +7;
int invfact[1000001]={0};
int fact[1000001]={0};
int fastmod(int a,int b){
    int res=1;
    int base=a;
    while(b){
        if(b&1)res=(res*base)%mod;
        base=(base*base)%mod;
        b>>=1;
    }
    return res;
}
void p(){
    fact[0]=1;
    for(int i=1;i<=1e6;i++){
        fact[i]=(fact[i-1]*i)%mod;
    }
    invfact[1000000]=fastmod(fact[1000000],mod-2);
    for(int i=1000000;i>0;i--){
        invfact[i-1]=(invfact[i]*i)%mod;
    }
}

bool good(int a,int b,int i){
    if(!i)return !a || !b;
    while(i){
        int d=i%10;
        if(d!=a && d!=b)return false;
        i/=10;
    }
    return true;
}


//here we are commiting changes in the file

void solve(){
    int a,b;
    cin>>a;
    cin>>b;
    int n;
    cin >> n;
   
    int sum= b*n,ans=0;
    for( int i=0;i<=n;i++){
        if(good(a,b,sum)){
            ans= (ans+((((fact[n]*invfact[n-i])%mod)*invfact[i])%mod))%mod;
        }
        sum=sum+a-b;
    }
    cout<<ans<<"\n";
   
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    p();
    
    
        solve();
    
    
    return 0;
}
