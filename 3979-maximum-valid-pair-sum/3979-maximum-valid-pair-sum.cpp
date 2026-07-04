class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int  maxi=nums[0];
        int ans=0;
        for(int j =k;j<nums.size();j++){
            maxi=max(maxi,nums[j-k]);
            ans=max(ans,nums[j]+maxi);
       } 
        return ans;
    }
};