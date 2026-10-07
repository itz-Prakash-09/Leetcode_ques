class Solution {
public:
   bool is_valid(vector<string>&ans,int i,int j){
                for(int z=0;z<i;z++){
                    if(ans[z][j] == 'Q') return false; 
                }
                int y=i-1,z=j-1;
                while(y>=0 && z>=0){
                        if(ans[y--][z--] =='Q' ) return false;
                    }
                y=i-1,z=j+1;
                while(y<ans.size() && z>=0){
                        if(ans[y--][z++] =='Q' ) return false;
                    }
                    return true;
    }
   void rec(int n ,vector<string>&ans,vector<vector<string>>&ret,int row){
     if(row == n) {
        ret.push_back(ans);
        return;
     }
     for(int i=0;i<n;i++){
        string temp(n,'.');
        temp[i] = 'Q';
        ans.push_back(temp);
        if(is_valid(ans,row,i)){
            rec(n,ans,ret,row+1);
        }
        ans.pop_back();
     }

   }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>ans;
        vector<vector<string>>ret;
        rec(n,ans,ret,0);
        return ret;
    }
};