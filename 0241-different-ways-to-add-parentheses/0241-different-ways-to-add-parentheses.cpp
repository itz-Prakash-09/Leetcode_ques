class Solution {
public:
    unordered_map<string,vector<int>>mp;
    vector<int> solve(string exp){
        if(mp.count(exp)) return mp[exp];
        vector<int>ans;
        for(int i=0;i<exp.size();i++){
            if(exp[i] =='+' || exp[i] == '-' || exp[i] == '*') {
                vector<int>l = solve(exp.substr(0,i));
                vector<int>r = solve(exp.substr(i+1,exp.size()));
                for(auto a:l){
                    for(auto b:r){
                        if(exp[i] == '+') ans.push_back(a+b);
                        else if(exp[i] == '-') ans.push_back(a-b);
                        else ans.push_back(a*b);
                    }
                }
            }
        }
        if(ans.empty()) ans.push_back(stoi(exp));
        return mp[exp] = ans; 
    }
    vector<int> diffWaysToCompute(string expression) {
        return solve(expression);
    }
};