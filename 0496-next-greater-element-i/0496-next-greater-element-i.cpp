class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        for(int i=0; i<n1; i++)
        {
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);
            int ind = it-nums2.begin();
            int var = -1;
            
            for(int j=ind+1; j<n2; j++)
            {
                if(nums2[j] > nums2[ind])
                {
                    var = nums2[j];
                    break;
                }
            }
            ans.push_back(var);
        }   
        
        return ans;
    }
};