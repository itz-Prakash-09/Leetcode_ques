class Solution {
public:
     void rec(int n,vector<string>&ret,int i,int j,string &ans){
        if(i ==n && j == n){
            ret.push_back(ans);
            return;
        }
        if(i<n)
         {
            ans += '(';
            rec(n,ret,i+1,j,ans);
            ans.pop_back();
         }
         if(j<n && i>j){
            ans+=')';
            rec(n,ret,i,j+1,ans);
            ans.pop_back();
         }
     }
    vector<string> generateParenthesis(int n) {
        vector<string>ret;
        string temp;
        rec(n,ret,0,0,temp);
        return ret;
    }
};