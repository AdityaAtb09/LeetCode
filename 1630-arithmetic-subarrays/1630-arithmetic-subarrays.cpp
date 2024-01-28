class Solution {
public:
    
    bool solve(vector<int>& nums,int first,int last){
        vector<int>temp;
        for(int i=first;i<=last;i++){
            temp.push_back(nums[i]);
        }
        sort(temp.begin(),temp.end());
        int diff=temp[1]-temp[0];
        for(int i=1;i<temp.size()-1;i++){
            if((temp[i+1]-temp[i])!=diff){
                return false;
            }
        }
        return true;
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i=0;i<l.size();i++){
            int first=l[i];
            int last=r[i];
            if((last-first+1)>=2){
                ans.push_back(solve(nums,first,last));
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};