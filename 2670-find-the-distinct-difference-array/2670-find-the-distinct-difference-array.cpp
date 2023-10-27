class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> m;
        unordered_set<int> s;
        
        int count = 0;
        
        for(auto i : nums)
        {
            m[i]++;
        }
        
        for(auto it : m)
        {
            if(it.second > 0)
            {
                count++;
            }
        }
        
        for(auto i : nums)
        {
            s.insert(i);
            m[i]--;
            
            if(m[i] == 0)
            {
                count--;
            }
            
            ans.push_back(s.size() - count);
        }
        
        return ans;
    }
};