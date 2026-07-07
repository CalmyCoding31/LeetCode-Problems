class Solution {
public:
    long long sumAndMultiply(int n) {
      int sum = 0;
      long long con= 0;
      int pow = 1;
      while(n!=0){
        int val = n%10 ;
        if(val!=0){
        sum = sum + val;
        con = pow*val + con;
        pow = pow*10;
        }
        n=n/10;
      }
      long long ans=con*sum;
       return ans;
    }
};