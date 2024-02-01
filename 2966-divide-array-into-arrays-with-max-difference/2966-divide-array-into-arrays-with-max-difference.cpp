class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
         
         vector<vector<int>>ans;
        int n=nums.size();
        if(n%3!=0)
            return ans;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i+=3){
            vector<int>temp(3,0);
            if(nums[i+2]-nums[i]<=k){
                temp[0]=nums[i];
                temp[1]=nums[i+1];
                temp[2]=nums[i+2];
                ans.push_back(temp);
            }
            else
            {
                return {};
            }
             
        }
        return ans;
        
    }
};