#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> vec(n);
    int b=0,mn=1e9,ssum=0;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        for(int j=0;j<m;j++){
            int x; 
            cin >> x;
            mn=min(mn,x);
            vec[i].push_back(x);
        }
        sort(vec[i].begin(),vec[i].end());
        b+=vec[i][0];
        ssum+=vec[i][1];
   }
  
   int bi=b;
   for(int i=0;i<n ;i++){
    int s1=vec[i][0],s2=vec[i][1];
     b=max(b,ssum-s2+mn);
   }
   cout<<b<<endl;
   return ;

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