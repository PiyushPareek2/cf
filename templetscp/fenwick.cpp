// asse assume kara kar ke prefix array he use kar rahe ha bas fark itna ha ke query to waise he ans degi bas update logn me sare upar wale update kar dega
// hamesha diff se update hota ha na ki 
struct Fenwick {
    int n;
    vector<int> bit;

    Fenwick(int n) : n(n), bit(n + 1, 0) {}

    void update(int idx, int val) {
        while (idx <= n) {
            bit[idx] += val;
            idx += idx & -idx;
        }
    }

    int query(int idx) {
        int sum = 0;
        while (idx > 0) {
            sum += bit[idx];
            idx -= idx & -idx;
        }
        return sum;
    }
};
// coordinate compression
class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp=nums;
        sort(temp.begin(),temp.end());
        vector<int> ans(n,0);
        temp.erase(unique(temp.begin(),temp.end()),temp.end());
        Fenwick ft(temp.size());
        for(int i=n-1;i>=0;i--){
            int idx=lower_bound(temp.begin(),temp.end(),nums[i])-temp.begin()+1;
            ans[i]=ft.query(idx-1);
            ft.update(idx,1);
        }
        return ans;
    }
};