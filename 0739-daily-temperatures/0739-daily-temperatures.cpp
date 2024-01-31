class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
      stack<pair<int,int>>st;
        int n=temperatures.size();
        vector<int>ans(n);
        
        for(int i=n-1;i>=0;i--){
            int x=temperatures[i];
            if(st.empty()){
                ans[i]=0;
                st.push({x,i});
                continue;
            }
           
            while(!st.empty() && st.top().first<=x){
                st.pop();
                
            }
            
             if(st.empty()){
                ans[i]=0;
                st.push({x,i});
                
            }
            else{
                ans[i]=st.top().second-i;
                st.push({x,i});
            }
                
            }
        return ans;
        }
    
};