#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n , k ,b ,s;
    cin >> n >> k >> b >> s;
    int val=(b)/n;
    vector<int> a(n,val*k);  
    for(int i=0;i< (b)%n;i++)a[i]+=k;
    
    int cur_sum=0;
    int space=0;
    for(int i=0;i<n;i++){
        cur_sum+=a[i];
        space+=k-1-(a[i]%k);
    }
    int d=s-cur_sum;
    if(d<0 || space<d){
        cout<<-1<<endl;
        return;
    }
    for(int i=0;d; i++){
        int sp=k-1-(a[i]%k);
        int mn=min(sp,d);
        a[i]+=mn;
        d-=mn;
}
  for(int i: a)cout<<i<<" ";
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