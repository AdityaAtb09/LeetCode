class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> ans;
        
        unordered_map<int, int> m;
        set<int> s1, s2, s3;
        
        for(int i=0; i<nums1.size(); i++)
        {
            s1.insert(nums1[i]);
        }
        
        for(int i=0; i<nums2.size(); i++)
        {
            s2.insert(nums2[i]);
        }
        
        for(int i=0; i<nums3.size(); i++)
        {
            s3.insert(nums3[i]);
        }
        
        for(auto it : s1)
        {
            m[it]++;
        }
        
        for(auto it : s2)
        {
            m[it]++;
        }
        
        for(auto it : s3)
        {
            m[it]++;
        }
        
        for(auto i : m)
        {
            if(i.second > 1)
            {
                ans.push_back(i.first);
            }
        }
        
        return ans;   
    }
};