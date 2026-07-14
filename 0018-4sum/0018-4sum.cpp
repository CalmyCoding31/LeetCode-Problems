class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
       for(int i=0;i<n-3;i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
         for(int j=i+1;j<n-2;j++){
            if(j>i+1&&nums[j]==nums[j-1]) continue;
            int k=j+1;
            int l=n-1;
            while(l>k){
               long long tar = 1LL * nums[i] + nums[j] + nums[k] + nums[l];
                if(tar==target){
                    ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                    k++;
                    l--;
                    while(k<l && nums[k]==nums[k-1]) k++;
                    while(l>k && nums[l]==nums[l+1]) l--;
                }
                else if(tar<target) k++;
                else l--;
            }
         }
       } 
       return ans;
    }
};