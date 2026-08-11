#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int a,b,x,y,ik,jk;
    cin >> a >> b ;
    cin >> x >>y;
    cin >> ik >> jk;
    set<pair<int,int>> s,s2;
    int dx[]={a , a , -a, -a, b , b , -b ,-b};
    int dy[]={-b, b , -b,  b, a ,-a , a  ,-a};

    for(int i=0;i<8;i++){
        s.insert({x+dx[i],y+dy[i]});
    }
    int ans=0;
     for(int i=0;i<8;i++){
        s2.insert({ik+dx[i],jk+dy[i]});
    }
    for(auto& [p,c]:s){
        if(s2.find({p,c})!=s2.end())ans++;
    }
    cout<<ans<<endl;
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