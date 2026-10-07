class Solution {
public:
bool solved(vector<vector<char>>& board){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j] == '.') return false;
        }
    }
    return true;
}
bool isValidSudoku(vector<vector<char>>& board,int a,int b) {
        int flag=0;
        for(int i=0;i<9;i++){
            if(i!= a && board[i][b] == board[a][b]) 
                    return false;
            else if(i!=b &&board[a][i] == board[a][b]) 
                    return false;
        }          
        int sr = (a/3)*3,sc = (b/3)*3;
        for(int br=0;br<3;br++){
            for(int bc=0;bc<3;bc++){
                char val = board[br+sr][bc+sc];
                if((a!=(br+sr) || b!=(bc+sc))&&val == board[a][b])
                        return false;
            }
        }
    return true;
    }
    bool solve(vector<vector<char>>&board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] == '.'){
                    for(int x=1;x<10;x++){
                        board[i][j]='0'+x;
                        if(isValidSudoku(board,i,j)){
                            if(solve(board)) return true;
                        }
                        board[i][j]='.';
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};