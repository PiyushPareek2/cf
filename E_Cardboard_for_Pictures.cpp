#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,c;
    cin >> n >> c;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    sort(a.rbegin(),a.rend());
    int l=0,r=sqrt(c)/2,w=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        int sum=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            sum+=(a[i]+2*mid)*(a[i]+2*mid);
            if(sum > c){
                 flag=false;
                break;
               
            }
        }
        
        if(flag){w=mid; l=mid+1;}
        else r=mid-1;
    }
    cout <<w<< endl;
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