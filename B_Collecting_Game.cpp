#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v[i]={x,i};
    }
    sort(v.begin(),v.end());
    vector<int> ps(n);
    ps[0]=v[0].first;
    for(int i=1;i<n;i++){
        ps[i]=ps[i-1]+v[i].first;
    }
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int found=i;
        int j=i;
        while(j<n){
            pair<int,int> temp={ps[j]+1,INT_MIN};
            int idx=lower_bound(v.begin(),v.end(),temp)-v.begin();
            idx--;
            if(idx==j){
                break;
            }
            found+=idx-j;
            j=idx;
        }
        ans[v[i].second]=found;
    }
    for(int i: ans)cout<<i<<" ";
    cout<<endl;
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