class Solution {
public:
    bool isPrime(int n) {
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}
    int maximumPrimeDifference(vector<int>& nums) {
        int i=0;
        for(i=0;i<nums.size();i++){
            if(isPrime(nums[i])) break;
        }
        int j=nums.size()-1;
        for(j=nums.size()-1;j>=0;j--){
            if(isPrime(nums[j])) break;
        }
        return j-i;
    }
};