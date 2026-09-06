#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    vector<int> nxtone(n,-1);
    vector<int> preone(n,-1);
    int p=-1;
    for(int i=1;i<n;i++){
        if(a[i-1]==1){
            preone[i]=i-1;
            p=i-1;
        }
        else preone[i]=p;
    }
    p=-1;
    for(int i=n-2;i>=0;i--){
        if(a[i+1]==1){
            nxtone[i]=i+1;
            p=i+1;
        }
        else nxtone[i]=p;
    }
    int l=0,r=n-1;
    while(l<r){
        if(!a[l]){l++; continue;}
        if(!a[r]){r--; continue;}
        if(preone[r]<=l){
            break;
        }
        if(nxtone[l]-l < r-preone[r]){
            l=nxtone[l];
        }
        else r=preone[r];
    }
    for(int i=0;i<n;i++){
        if(a[i]==0 || a[i]==1){cout<<a[i]<<' '; continue;}
        if((i==l || i==r)&&(a[i]==-1))cout<<1<<' ';
        else if(l<i && r>i && a[i]==-1)cout<<0<<" ";
        else if(a[i]==-1)cout<<0<<' ';
        else cout<<a[i]<<' ';
    }
    cout<<endl;
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