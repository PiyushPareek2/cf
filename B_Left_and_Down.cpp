#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int a,b,k;
    cin >> a;
    cin >>b;
    cin >> k;
    int a1=a , b1=b;
    while(a1&&b1){
        if(a1>b1)a1=a1%b1;
        else b1=b1%a1;
    }
    int g= a1+b1;
    
    if(max(a/g , b/g )<=k){
        cout<<1<<endl;
        return;
    }

    else cout << 2  << endl;

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