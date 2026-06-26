#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> freq(n+1,0);
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x<=n)freq[x]++;
   }
   vector<int> idx(n+1,0);
   for(int i=1;i<=n;i++){
    if(!freq[i])continue;
      for(int j=i;j<=n;j+=i){
        idx[j]+=freq[i];
      }
   }
   int mx=0;
   for(int i=1;i<=n;i++){
    mx=max(idx[i],mx);
   }
   cout<<mx<<endl;
  

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