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
    
    int total_test;
    cin >> total_test;
    for(int cur_test=1;cur_test<=total_test;cur_test++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto& x : a)cin >> x;
        int h1=0,h2=0;
        for(int i=0;i<n;i+=2){
            h1=gcd(h1,a[i]);
            if(i+1<n){
                h2=gcd(h2,a[i+1]);
            }
        }
        bool flag=true;
        for(int i=1;i<n;i+=2){
            if(a[i]%h1==0){
                flag=false;
                break;
            }
        }
        if(flag){
        cout<<h1<<nl;
        continue;
        }
        flag=true;
         for(int i=0;i<n;i+=2){
            if(a[i]%h2==0){
                flag=false;
                break;
            }
        }
        if(flag){
        cout<<h2<<nl;
        continue;
    }
    cout<<0<<nl;

    }
    
    return 0;
}