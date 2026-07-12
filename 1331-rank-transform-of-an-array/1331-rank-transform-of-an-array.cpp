class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
         int n=arr.size();
         vector<int> ans;
         if(n==0){
            return ans;
         }
        map<int , int > mpp;
         ans=arr;
         int cnt=1;
        sort(arr.begin(),arr.end());
       
        for(int i=1;i<n;i++){
            mpp[arr[i-1]]=cnt;
            if(arr[i-1]!=arr[i]) cnt++;
        }
        mpp[arr[n-1]]=cnt;
        for(int i=0;i<n;i++){
            cout << mpp[arr[i]];
           ans[i]=mpp[ans[i]];
        }
        return ans;
    }
};