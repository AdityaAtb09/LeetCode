class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> m;
        int cnt = 0;
        
        for(auto s : words1)
        {
            m[s]++;
        }
        
        for(auto s : words2)
        {
            if(m[s] < 2)
            {
                m[s]--;
            }
        }
        
        for(auto it : m)
        {
            if(it.second == 0)
            {
                cnt++;
            }
        }
        
        return cnt;
    }
};