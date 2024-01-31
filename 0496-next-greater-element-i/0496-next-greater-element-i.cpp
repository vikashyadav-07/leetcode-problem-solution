class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>temp(10001,0);
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--){
            if(st.empty()==true){
                temp[nums2[i]]=-1;
                st.push(nums2[i]);
                continue;
            }
            if(nums2[i]<st.top()){
              temp[nums2[i]]=st.top();
               st.push(nums2[i]);
               continue;

            }
            while( !st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty())
            temp[nums2[i]]=-1;
            else
            temp[nums2[i]]=st.top();
            st.push(nums2[i]);
        }  
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(temp[nums1[i]]);
        }
        return ans;
    }
};