class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN;
        int j=0;
        int maxsum=0;
       while(j<nums.size()){
        maxsum+=nums[j];
        ans=max(maxsum,ans);
        if(maxsum<0) maxsum=0;
        j++;
       } 
       return ans;
    }
};