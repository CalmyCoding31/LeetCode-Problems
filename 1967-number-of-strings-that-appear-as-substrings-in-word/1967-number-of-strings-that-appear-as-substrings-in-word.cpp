class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        set<string>st;
        for(int i =0;i<word.size();i++){
            string temp="";
            for(int j=i;j<word.size();j++){
                temp+=word[j];
                st.insert(temp);
            }
        }
        int cnt = 0;
        for(auto it:st){
            for(int i =0;i<patterns.size();i++){
            if(patterns[i]==it) cnt++;
            }
        }
        return cnt;
    }
};