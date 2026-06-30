class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maximum=*max_element(nums.begin(), nums.end());
        vector<int> hash(maximum+1,0);
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int maxi=*max_element(hash.begin(), hash.end());
        int ans = 0;
        for(int i=0;i<hash.size();i++){
            if(hash[i]==maxi){
            ans++;
            }
        }
        return ans*maxi;
    }
};