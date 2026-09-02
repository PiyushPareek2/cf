#include <bits/stdc++.h>
using namespace std;

#define int long long
int f(int a,int k,vector<vector<int>>& city){
    int ans=LONG_LONG_MAX;
    int x=city[a-1][0],y=city[a-1][1];
    for(int i=0;i<k;i++){

        ans=min(ans,abs(x-city[i][0])+abs(y-city[i][1]));
    }
    return ans;
}
void solve(){
    int n,k,a,b;
    cin >> n >> k >> a >> b;
    vector<vector<int>> city(n,vector<int>(2,-1));
    for(int i=0;i<n;i++){
        int x,y;
        cin >>x >> y;
        city[i][0]=x;
        city[i][1]=y;
    }
    int dist=abs(city[a-1][0]-city[b-1][0])+abs(city[a-1][1]-city[b-1][1]);
    if(k!=0)
    dist=min(dist,f(a,k,city)+f(b,k,city));
    cout <<dist<< "\n";
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