class Solution {
public:
    bool is_palindrome(string s){
        int size = s.size()/2;
        int i=0;
        while(size--){
            if(s[i] != s[s.size()-i-1]) return false;
            i++;
        }
        return true;
    }
    void rec(string s,vector<string>&ans,vector<vector<string>>&ret,int idx){
        if(idx == s.size()){
            ret.push_back(ans);
            return;
        }
        string temp="";
        for(int i=idx;i<s.size();i++){
            temp+=s[i];
           if(is_palindrome(temp)) {
            ans.push_back(temp);
           rec(s,ans,ret,i+1); 
           ans.pop_back();
           }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>ans;
        string temp;
        vector<vector<string>>ret;
        rec(s,ans,ret,0);
        return ret;
    }
};