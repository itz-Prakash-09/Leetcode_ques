class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1);
        if(nums.size()<2) return *max_element(nums.begin(),nums.end());
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++){
            dp[i] = max(dp[i-1], dp[i-2] +nums[i]);
        }
        for(auto x:dp){
            cout<<x<<" ";
        }
        return *max_element(dp.begin(),dp.end());
    }
};