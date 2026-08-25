#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
   
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    sort(a.rbegin(),a.rend());
    int playersleft=n,teams=0;
    for(int i=0;i<n;i++){
        int pi=a[i];
        int pneed=(d+pi)/pi;
        if(playersleft< pneed)
        break;
        else {playersleft-=pneed;
              teams++;
        }
    }
    cout << teams << endl;
   
    return 0;
}