class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size();i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            int tar=nums[i]+nums[j]+nums[k];
            if(tar==0){
                st.insert({nums[i],nums[j],nums[k]});
                j++;
                k--;
            }
            else if(tar<0) j++;
            else k--;
        }
      } 
        vector<vector<int>> ans(st.begin(),st.end());
      return ans;
    }
};