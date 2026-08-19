#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    if(n%25==0){
        cout<<0<<endl;
        return;
    }
    int k=-2;
    int five=0,zero=0;
    while(n){
        k++;
        int rem=n%10;
        n/=10;
        if(rem==0){
            if(zero)break;
            zero++;
        }
        else if(rem==2){
            if(five)break;
        }
        else if(rem==5){
            if(zero)break;
            five++;
        }
        else if(rem==7){
            if(five)break;
        }
    }
    cout<<k<<endl;
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