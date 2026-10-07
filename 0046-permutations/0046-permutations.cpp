class Solution {
public:
    void rec(vector<int>&nums,vector<int>&ans,vector<vector<int>>&ret,vector<bool>&vis){
        if(ans.size() == nums.size()) {
            ret.push_back(ans);
            return;
        }
        for(int i=0;i<nums.size();i++){
        if(vis[i]) continue;
        if(!vis[i]){
        ans.push_back(nums[i]);
        vis[i] = 1;
        }
        rec(nums,ans,ret,vis);
        ans.pop_back();
        vis[i] = 0;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>ret;
        vector<bool>check(nums.size(),0);
        rec(nums,ans,ret,check);
        return ret;
    }
};