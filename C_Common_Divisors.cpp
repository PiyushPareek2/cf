#include <bits/stdc++.h>
using namespace std;

#define int long long

int factors(int a){
    if(a==1)return 1;
    int fact=0;
    for(int i=1;i*i<=a;i++){
        if(a%i==0){fact++;
        if(i!=(a/i))fact++;
    }
    }
    
    return fact;
}
int gcd(int a ,int b){
    while(a&&b){
        if(a>b) a=a%b;
        else b=b%a;
    }
    return a?a:b;
}
void solve(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto &x : nums) cin >> x;
    int ans=0,gcf=nums[0];
    for(int i=1;i<n;i++) {
        gcf=gcd(gcf,nums[i]);
    }
    cout<< factors(gcf)<<endl;
    return ;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   solve();
    
    return 0;
}