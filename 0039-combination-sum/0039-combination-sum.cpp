class Solution {
public:
      void rec(vector<int>&candidates,int idx,int target,int& sum,vector<vector<int>>&ans,vector<int>&sub){
        if(sum == target) {
            ans.push_back(sub);
            return;
        }
        else if(idx == candidates.size() || sum>target) {
            return ;
        }
        sum+= candidates[idx];
        sub.push_back(candidates[idx]);
        rec(candidates,idx,target, sum,ans,sub);
        sum-= candidates[idx];
        sub.pop_back();
        rec(candidates,idx+1,target,sum,ans,sub);
      }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>sub;
        int sum=0;
        rec(candidates,0,target,sum,ans,sub);
        return ans;
    }
};