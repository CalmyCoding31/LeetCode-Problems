class Solution {
public:
    int majorityElement(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int ans;
     int maxi=0;
     int i=0;
     while(i<nums.size()){
        int j=i+1;
        while(j<nums.size() && nums[i]==nums[j]) j++;
        if(maxi<j-i+1){
            maxi=j-i+1;
            ans=nums[i];
        }
        i=j;
     }
     return ans;   
    }
};