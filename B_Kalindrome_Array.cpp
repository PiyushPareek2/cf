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
        int p1=0,p2=n-1;
        while(p2>p1 && a[p1]==a[p2]){p1++; p2--;}
        if(p1>=p2){
            cout<<"YES"<<nl;
            continue;
        }
        int x=a[p1];
        int l=0,r=n-1;
        while(l<=r){
            if(a[l]==a[r]){
                l++;
                r--;
                continue;
            }
            else{
                if(a[l]==x){
                    l++;
                    continue;
                }
                else if(a[r]==x){
                    r--;
                    continue;
                }
                else break;
            }
        }
        if(l>r){
            cout<<"YES"<<nl;
            continue;
        }
        x=a[p2];
        l=0,r=n-1;
         while(l<=r){
            if(a[l]==a[r]){
                l++;
                r--;
                continue;
            }
            else{
                if(a[l]==x){
                    l++;
                    continue;
                }
                else if(a[r]==x){
                    r--;
                    continue;
                }
                else break;
            }
        }
        
        if(l>r){
            cout<<"YES"<<nl;
            continue;
        }
        cout<<"NO";
        cout<<nl;
    }
    
    return 0;
}