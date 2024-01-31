class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        vector<int>ans(n,0);
        for(int i=2*n-1;i>=0;i--){
            int x=nums[i%n];
           while(!st.empty() && st.top()<=x) {
               st.pop();
           }
            
            if(i<n){
                if(st.empty()){
                    ans[i]=-1;
                    
                }
                else
                {
                    ans[i]=st.top();
                    
                }
                
            }
            st.push(x);
            
        }
        return ans;
        
    }
};