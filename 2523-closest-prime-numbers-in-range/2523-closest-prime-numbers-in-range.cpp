class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> ans(2, -1);
        if(right < 2) return ans;
         vector<char>seive(right+1,0);
         seive[0] =1,seive[1] =1;
        vector<int>arr;
        for(int i=2;1LL *i*i<=right;i++){
            if(seive[i] == 0){
                for(int j=i*i;j<=right;j+=i){
                    seive[j] = 1;
                }
            }
        }
         for(int i=max(2,left);i<=right;i++) {
            if(!seive[i]) arr.push_back(i);
        }
        int mn = INT_MAX;
        for(int i=0;i+1<arr.size();i++){
            if(mn>abs(arr[i]-arr[i+1])){
                mn = abs(arr[i]-arr[i+1]);
                ans[0] =arr[i];
                ans[1] = arr[i+1];
            }
        }
        return ans;
    }
};