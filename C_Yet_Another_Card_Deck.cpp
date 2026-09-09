#include <bits/stdc++.h>
using namespace std;
#define int long long
#define printvec(v) for(auto &x : v) cout << x << ' '; cout << '\n'
#define print(v) cout<<v<<' '
#define nl '\n'
#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x << " = " << (x) << " (Line " << __LINE__ << ")\n"
#else
#define dbg(x)
#endif

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
        int n,q;
        cin >> n >> q;
        vector<int> a(n),b(q);
        for(auto& x : a)cin >> x;
        for(auto& x : b)cin >> x;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.count(a[i]))continue;
            mp[a[i]]=i+1;
        }
        for(int f: b){
            int idx=mp[f];
            cout<<idx<<' ';
            for(int  i=1;i<=50;i++){
                if(mp.count(i) && mp[i] < idx){
                mp[i]++;
            }
            }
            mp[f]=1;

        }

        
        
        cout<<nl;
    
    
    return 0;
}