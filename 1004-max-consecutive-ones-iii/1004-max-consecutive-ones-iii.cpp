class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans=0;
        int first=0,second=0;
        int n=nums.size();
        int count=0;

        while(second < n){
      if(nums[second]==1){
          count++;
          ans = max(ans,count);
          second++;
          continue;
      }
        if(nums[second]==0  && k>0){
          count++;
          ans = max(ans,count);
          second++;
          k--;
          continue;
      }
       while(k==0){
           if(nums[first]==1){
           count--;
           first++;
       }
       else{
           count--;
           k+=1;
           first++;

       }
    
        }
        }
        return ans;

    }
};