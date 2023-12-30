class Solution {
public:
    int partitionString(string s) {
        vector<char> v;
        int ans = 0;
        
        for(auto ch : s)
        {
            if(find(v.begin(), v.end(), ch) != v.end())
            {
                ans++;
                v.clear();
            }
            v.push_back(ch);
        }
        
        if(v.size() != 0)
        {
            ans++;
        }
        
        return ans;
    }
};