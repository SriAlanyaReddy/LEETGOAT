class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int n = a.size();
        vector<int> pre(n, 1);
        vector<int> suf(n, 1);
        
        // Compute prefix products
        for (int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] * a[i - 1];
        }
        
        // Compute suffix products
        for (int i = n - 2; i >= 0; i--) {
            suf[i] = suf[i + 1] * a[i + 1];
        }
        
        // Compute final result
        vector<int> dp(n);
        for (int i = 0; i < n; ++i) {
            dp[i] = pre[i] * suf[i];
        }
        
        return dp;
    }
};
