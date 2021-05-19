class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        if(n >= 2)
        {
            dp[1] = max(nums[0], nums[1]);
            for (int i = 3; i <= n; ++i)
            {
                dp[i-1] = max(dp[i-2], dp[i-3] + nums[i-1]);
            }
        }
        return dp.back();
    }
};


/*
nums= [1,3,6,5,9,2]
dp[0] = 1 = nums[0];
dp[1] = 3 = max(nums[0], nums[1])
dp[2] = 7 = max(dp[0] + nums[2], dp[1])
dp[3] = 8
dp[4] = 16
dp[5] = max(dp[4], dp[3]+nums[5])

equation: n = nums.size()
          vector<int> dp(n-1, 0);
          dp[i-1] = max(dp[i-2], dp[i-3] + nums[i-1])
          
          
          https://leetcode.com/problems/house-robber/
*/
