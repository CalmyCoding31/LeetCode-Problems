class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      vector<int>ans;
      int i=0;
      while(i<nums.size()){
        int j=i+1;
          int cnt=1;
        while(j<nums.size() && nums[i]==nums[j]){
            cnt++;
            j++;
        }
        if(cnt>nums.size()/3){
            ans.push_back(nums[i]);
        }
        i=j;
      }  
      return ans ;
    }
};