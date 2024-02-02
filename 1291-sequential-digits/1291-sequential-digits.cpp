class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int ll=to_string(low).length();
         int hl=to_string(high).length();
        string s="123456789";
        vector<int>ans;
        for(int i=ll;i<=hl;i++){
            
            for(int j=0;j<10-i;j++){
                
                int num=stoi(s.substr(j,i));
                if(num>=low && num<=high){
                    ans.push_back(num);
                }
            }
            
        }
        return ans;
        
        
    }
};