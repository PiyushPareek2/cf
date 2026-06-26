#include <bits/stdc++.h>
using namespace std;

#define int long long
int barabar(vector<int>&a,int x){
    int op=0,n=a.size();
    if(n&1){
        int mid=a[n/2 +1];
        for(int i: a) op+=abs(mid-i)/x;
    }
    else{
        int mid=a[n/2];
        for(int i: a) op+=abs(mid-i)/x;
        int op2=0;
        mid=a[n/2 -1];
        for(int i: a) op2+=abs(mid-i)/x;
        op=min(op,op2);
    }
    return op;
}

int gcd(int a,int b){
    while(a&&b){
        if(a>b)a=a%b;
        else b=b%a;
    }
    return a?a:b;
}
int lcm(int a,int b){
    return  (a/gcd(a,b)*b);
}
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int g=0;
    
    for(auto &x : a) {
        cin >> x;
        g=gcd(x,g);
    }
    for(int i: a){
        if(g==i)g=2*g;
    }
    sort(a.begin(),a.end());
    a.push_back(g);
    int l=g;
    sort(a.begin(),a.end());
    for(int i:a)l=lcm(l,i);

    int op=barabar(a,l);
    
    
    
    cout << op << endl;
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