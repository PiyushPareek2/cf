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
        int x,y,k;
        cin >> x >> y >> k;
        if(x==y){
            cout<<0<<nl;
            continue;
        }
        if(x>y){
            cout<<y<<nl;
            continue;
        }
        int c=0,ans=0;
        while(c<k){
            int l=c,r=k-1,s =(y+c)%(x+c);
            int L=c;
            while(l<r){
                int mid= l + (r-l)/2;
                int cur= (y+mid)%(x+mid);
                if(cur==s){
                    L=mid;
                    l=mid+1;
                }
               
                else {
                    r=mid-1;
                }
            }
            L=min(L,k-1);
            ans+= (L-c+1)*s;
            
            c=L+1;

        }
        dbg(ans);
        
        cout<<ans<<nl;
    }
    
    return 0;
}