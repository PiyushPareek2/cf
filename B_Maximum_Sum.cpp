#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n,k;
    cin >> n >>k;
    int sum=0;
    vector<int> a(n);
    for(auto &x : a){ cin >> x;}
  
    sort(a.begin(),a.end());
    int p1=0,p2=1,p3=n-1,v=0;
    vector<int> ps(n,0);
    ps[0]=a[0];
    for(int i=1;i<n;i++)ps[i]=ps[i-1]+a[i];
    for(int i=0;i<=k;i++){
        int op2=k-i;
        if(i!=0)
        sum=max(sum,-ps[2*i - 1 ]+ps[n-op2-1]);
        else
        sum=max(sum,ps[n-op2-1]);
    }
    
    cout <<sum<< endl;
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