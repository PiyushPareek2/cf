#include <bits/stdc++.h>
using namespace std;

#define int long long



signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   int n,m;
   cin>>n>>m;
   vector<int> a(n);
   for(auto&x : a)cin>>x;
   if(n>m){
    cout<<0<<endl;
    return 0;
   }
   int ans=1;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        ans=(ans*abs(a[i]-a[j]))%m;
    }
   }
   cout<<ans<<endl;
    
    return 0;
}