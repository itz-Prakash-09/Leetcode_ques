class Solution {
public:
const int MOD = 1e9 + 7;
     long long power(long long a,long long b){
        long long res=1; 
        while(b){
            if(b&1) res=res*a%MOD;
            a=a*a%MOD;
            b/=2;
        } 
        return res;
    }

    int countGoodNumbers(long long n) {
      long long ec = (n+1)/2;
      long long oc = n/2;
      long long ew = power(5,ec);
      long long ow = power(4,oc);
      return ew*ow%MOD;

    }
};