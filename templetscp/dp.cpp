/**1. 0/1 Knapsack (Most Important)

Used for:

Subset Sum
Partition Equal Subset Sum
Last Stone Weight II
Target Sum
Count Subsets



Variants:

Boolean
Maximum value
Minimum value
Counting ways
**/
// 0/1 means at an index do he faisle le sakte ha take / not take  or  make + / -  or make  select /not select
for (int x : nums)
    for (int j = W; j >= x; j--)
        dp[j] = transition(dp[j], dp[j - x]);

// ye merawala ha
  vector<bool> dp(sum+1,false);
       dp[0]=true;
       for(int i=0;i<n;i++){
         vector<bool> nxt=dp;
         for(int j=0;j<=sum;j++){
            nxt[j]=dp[j] || ((j-stones[i] >=0) && dp[j-stones[i]]);
         }
         dp=nxt;
       }

// unbounded  0/1 knapsack same index se 0/1 operation infinite time ho sakta ha
int knapsack01(vector<int>& wt, vector<int>& val, int W) {
    int n = wt.size();

    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= W; j++) {

            int notTake = dp[i - 1][j];

            int take = INT_MIN;
            if (wt[i - 1] <= j)
                take = val[i - 1] + dp[i - 1][j - wt[i - 1]];

            dp[i][j] = max(take, notTake);
        }
    }

    return dp[n][W];
}

//dp on string 

//longest common subsequence
vector<vector<int>> dp(n1+1, vector<int>(n2+1, 0));

for(int i=1;i<=n1;i++){
    for(int j=1;j<=n2;j++){
        if(s1[i-1] == s2[j-1])
            dp[i][j] = 1 + dp[i-1][j-1];
        else
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
    }
}

return dp[n1][n2];

//using same dp to find the lcs
string lcs = "";

int i = n1, j = n2;

while(i > 0 && j > 0){
    if(s1[i-1] == s2[j-1]){
        lcs += s1[i-1];
        i--;
        j--;
    }
    else if(dp[i-1][j] > dp[i][j-1]){
        i--;
    }
    else{
        j--;
    }
}

reverse(lcs.begin(), lcs.end());

//longest common subarray
int longestCommonSubstring(string s1, string s2) {
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

//## for longest common palindromic subsequence or substring for s1 use above two with s2= reverse s1
// n-longest common palindromic subsequence of str = min insetion to make str palindrome

//s ke kitne subsequence equal to t
long long countSubsequences(string s, string t) {
    int n = s.size(), m = t.size();

    vector<vector<long long>> dp(n + 1,
                                 vector<long long>(m + 1, 0));

    for(int i = 0; i <= n; i++)
        dp[i][0] = 1;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {

            dp[i][j] = dp[i - 1][j];

            if(s[i - 1] == t[j - 1])
                dp[i][j] += dp[i - 1][j - 1];
        }
    }

    return dp[n][m];
}

// best time to buy and sell stock atmost 2 transction
class Solution {
public:
    int f(vector<int>& prices,int i,int buy,int cnt ,vector<vector<vector<int>>>& dp){
        if(cnt==2)return 0;
        if(i==prices.size())return 0;
        if(dp[i][buy][cnt]!=-1)return dp[i][buy][cnt];
        int a=0;
        if(buy ){
            a=max(f(prices,i+1,1,cnt,dp),-prices[i]+f(prices,i+1,0,cnt,dp));
        }
        else{
            a=max(f(prices,i+1,0,cnt,dp),prices[i]+f(prices,i+1,1,cnt+1,dp));
        }
        return dp[i][buy][cnt]=a;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        for(int i=n-1;i>=0;i--){
               for(int cnt=0;cnt<2;cnt++){
                    dp[i][1][cnt]=max(dp[i+1][1][cnt],-prices[i]+dp[i+1][0][cnt]);
                    dp[i][0][cnt]=max(dp[i+1][0][cnt],prices[i]+dp[i+1][1][cnt+1]);
                }
            
        }
        return dp[0][1][0];
    }
};
// length of longest increasing subsequence 
int lengthOfLIS(vector<int>& nums) {
    int n = nums.size();

    vector<int> dp(n, 1);
    int ans = 1;

    for (int i = 0; i < n; i++) {
        for (int prev = 0; prev < i; prev++) {

            if (nums[prev] < nums[i]) {
                dp[i] = max(dp[i], dp[prev] + 1);
            }

        }
        ans = max(ans, dp[i]);
    }

    return ans;
}
// print lis or largest divisiblity sequence  by changing condition

    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        if(!n)return ans;
        int maxi=-1,idx=-1;
        sort(nums.begin(),nums.end());
        vector<int> dp(n,0),hash(n+1,-1);
        for(int i=0;i<n;i++){
            hash[i]=i;
            for(int j=0;j<i;j++){
                if(nums[i]% nums[j]==0 && dp[i]< dp[j]+1){ // this condition can be change for any other cases
                    dp[i]=dp[j]+1;
                    hash[i]=j;
                }
            }
            if(dp[i]>maxi){
                maxi=dp[i];
                idx=i;
            }
        }
         
         while(hash[idx]!=idx){
            ans.push_back(nums[idx]);
            idx=hash[idx];
         }
         ans.push_back(nums[idx]);
       return ans;
        
    }
// partation dp
1.start with entire array /block f(i,j)
2.try all partition (run for loop to run all partition)
3.return the best possible two partition
class Solution {
public:
    int f(int i, int j, vector<vector<int>>& dp) {

        // Base case
        if (i >= j)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        int ans = INT_MAX;

        // Try every partition
        for (int k = i; k < j; k++) {

            int left = f(i, k, dp);
            int right = f(k + 1, j, dp);

            int cost = /* problem specific */;

            ans = min(ans, left + right + cost);
        }

        return dp[i][j] = ans;
    }

    int solve(int n) {

        vector<vector<int>> dp(n, vector<int>(n, -1));

        return f(0, n - 1, dp);
    }
};
// tabuluization
vector<vector<int>> dp(n, vector<int>(n, 0)); // base case i==j dp[i][j]=0 len =1

for (int len = 2; len <= n; len++) { //using len till n

    for (int i = 0; i + len - 1 < n; i++) { // i only till i+len-1<n

        int j = i + len - 1;

        dp[i][j] = INF;

        for (int k = i; k < j; k++) { // partition from i to j-1 as in recurance

            dp[i][j] = min(dp[i][j],
                           dp[i][k]
                         + dp[k + 1][j]
                         + cost(i, k, j));
        }
    }
}
