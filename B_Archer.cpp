#include <bits/stdc++.h>
using namespace std;

#define int long long
#define float long double

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long double a,b,c,d;
    cin>>a>>b>>c>>d;
    long double ps=a/b,pz=c/d;;

    
    cout << fixed << setprecision(12)
     << ps / (ps + pz - ps * pz);
}