class Solution {
public:
   vector<string> addstr(int val,string str){
   vector<string> ret(val==7 || val==9 ? 4 : 3);
     if(val == 2){
        ret[0]+= str+'a';
        ret[1]+= str+'b';
        ret[2]+= str+'c';
     }
     if(val == 3){
        ret[0]+= str+'d';
        ret[1]+= str+'e';
        ret[2]+= str+'f';
     }
     if(val == 4){
        ret[0]+= str+'g';
        ret[1]+= str+'h';
        ret[2]+= str+'i';
     }
     if(val == 5){
        ret[0]+= str+'j';
        ret[1]+= str+'k';
        ret[2]+= str+'l';
     }
     if(val == 6){
        ret[0]+= str+'m';
        ret[1]+= str+'n';
        ret[2]+= str+'o';
     }
     if(val == 7){
        ret[0]+= str+'p';
        ret[1]+= str+'q';
        ret[2]+= str+'r';
        ret[3]+=str+'s';
     }
     if(val == 8){
        ret[0]+= str+'t';
        ret[1]+= str+'u';
        ret[2]+= str+'v';
     }
     if(val == 9){
        ret[0]+= str+'w';
        ret[1]+= str+'x';
        ret[2]+= str+'y';
        ret[3]+=str+'z';
     }
     return ret;
   }
    vector<string> letterCombinations(string digits) {
        string str;
        vector<string> ans = {""};
     for(int i=0;i<digits.size();i++){
        vector<string>temp;
        int size = ans.size();
        for(int j=0;j<size;j++){
            vector<string> cur =(addstr((digits[i])-'0',ans[j]));
            for(string x:cur){
                temp.push_back(x);
            }
        }
        ans = temp;
     }   
     return ans;    
    }
};