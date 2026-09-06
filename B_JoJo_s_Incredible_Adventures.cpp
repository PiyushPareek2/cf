#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
   string s;
   cin >>s;
   int n=s.size();
   int x=0,cnt=0;
   for(int i=0;i<2*n;i++){
    char ch =s[i%n];
    if(ch=='1'){
        cnt++;
    }
    else{
        x=max(cnt,x);
        cnt=0;
    }
   }
     x=max(cnt,x);
   if(x>=n){
    cout<<n*n<<endl;
    return ;
   }
   int ans=(x)/2 * (x+2)/2;
   
   cout<<ans<<endl;
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