class Solution {
public:
  void rec(vector<int>&arr,vector<int>&digits,int idx,int num,int cnt,vector<int>&check,vector<int>&seen){
    if(cnt==3){
        if(num%2==0 && !seen[num]){
        arr.push_back(num);
        seen[num] = 1;
        }
        return;
    }
    if(idx == digits.size()) return;
    if(!check[idx] && (cnt!=0 || digits[idx] !=0)){
        check[idx] =1;
        num*=10;
        num+=digits[idx];
        rec(arr,digits,0,num,cnt+1,check,seen);
        check[idx] =0;
        num/=10;
    }
        rec(arr,digits,idx+1,num,cnt,check,seen);
  }
    int totalNumbers(vector<int>& digits) {
        vector<int>arr;
        int num=0;
        vector<int>check(digits.size(),0);
        vector<int>seen(1000,0);
        rec(arr,digits,0,num,0,check,seen);
        return arr.size(); 
     }
};