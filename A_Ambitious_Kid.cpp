#include <bits/stdc++.h>
using namespace std;

#define int long long



signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
     int n;
    cin >> n;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        ans=min(abs(a),ans);
    }
    cout<<ans<<endl;
    
    return 0;
}