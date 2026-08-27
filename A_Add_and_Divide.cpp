#include <bits/stdc++.h>
using namespace std;

#define int long long
int logl(int x,int a){
    a++;
    return ceil((1.0*log2(a))/log2(x));
}
void solve(){
   int a,b;
   cin >> a >> b;
   int op=0;
   if(!a){
    cout<<0<<endl;
    return;
   }
   if(b==1){
    op+=1;
    b=2;
   }
   int x=b+1;
   while(1+logl(x,a)<=logl(b,a)){
    b=x;
    x=b+1;
    op++;
   }
   cout<<op+logl(b,a)<<endl;
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