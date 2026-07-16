class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt1=0;
        int cnt2=0;
        int el1=-1;
        int el2=-1;
        for(int i=0;i<n;i++){
            if(el1==nums[i]) cnt1++;
            else if(el2==nums[i]) cnt2++;
            else if(cnt1==0){
                el1=nums[i];
                cnt1=1;
            }
            else if(cnt2==0){
                el2=nums[i];
                cnt2=1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;
        cnt2=0;
        for(int i=0;i<n;i++){
            if(el1==nums[i]) cnt1++;
            else if(el2==nums[i]) cnt2++;
        }
        cout<<el1<<" "<<el2<<endl;
        if(cnt1>n/3 && cnt2>n/3) return {el1,el2};
        if(cnt1>n/3) return {el1};
        if(cnt2>n/3) return {el2};
        return {};
    }
};