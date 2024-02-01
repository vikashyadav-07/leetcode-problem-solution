class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int first=0;
        int second=0;
        int ans=0;
        vector<int>temp(256,0);
        while(second<n){
            while(temp[s[second]]){
                temp[s[first]]=0;
                first++;
            }
            ans=max(ans,second-first+1);
            temp[s[second]]=1;
            second+=1;
        }
        return ans;
        
    }
};