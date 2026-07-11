class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int, int> mpp;
     vector<int> ans(2);
     for(int i=0;i<nums.size();i++){
        int rem = target-nums[i];
        if(mpp.find(rem)!=mpp.end()){
          ans[0]=i;
          ans[1]=mpp[rem];
        }
        if(mpp.find(nums[i])==mpp.end()){
            mpp[nums[i]]=i;
        }
     }
    return ans;
    }
};