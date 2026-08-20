#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int m ,n ,i ,j;
    cin >> m >> n >> i >> j;
    int x1,x2,y1,y2;
    if(m-i>i-1)x1=m;
    else x1=1;
    if(n-j>j-1)y1=n;
    else y1=1;
    if(m-x1>x1-1)x2=m;
    else x2=1;
    if(n-y1>y1-1)y2=n;
    else y1=1;
    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
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