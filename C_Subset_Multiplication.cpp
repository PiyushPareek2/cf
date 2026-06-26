#include <bits/stdc++.h>
using namespace std;

#define int long long
int gcd(int a,int b){
    while(a&&b){
        if(a>b)a=a%b;
        else b=b%a;
    }
    return  a?a:b;
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int A=1,ans=0;
    for(int i=0;i<n-1;i++){
        if( a[i+1]%a[i]!=0){
            A=a[i]/gcd(a[i],a[i+1]);
            if(!ans)ans=A;
            else ans=(ans*A)/gcd(ans,A);
           }
    }
    if(!ans)cout<<1<<endl;
    else cout<<ans<<endl;
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