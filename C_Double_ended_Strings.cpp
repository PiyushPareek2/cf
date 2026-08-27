#include <bits/stdc++.h>
using namespace std;

#define int long long

int longestCommonSubstring(string& s1, string& s2) {
    int n = s1.size(), m = s2.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                ans = max(ans, dp[i][j]);
            }
        }
    }

    return ans;
}
void solve(){
    string a="",b="";
    cin >> a >> b;
    int lcs=longestCommonSubstring(a,b);
    int res= -lcs*2 +a.size()+b.size();
    cout <<res<< endl;
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