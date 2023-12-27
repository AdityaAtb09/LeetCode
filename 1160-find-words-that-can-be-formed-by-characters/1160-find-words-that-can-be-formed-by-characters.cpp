class Solution {
public:
    
    int canForm(string s, unordered_map<char, int> map)
    {
        int n = s.size();
        
        for(auto i : s)
        {
            auto it = map.find(i);
            
            if(it != map.end() && it->second>0)
            {
                map[i]--;
            }
            else
            {
                return 0;
            }
        }
        
        return n;
    }
    
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        unordered_map<char, int> m;
        
        for(auto ch : chars)
        {
            m[ch]++;
        }
        
        for(auto str : words)
        {
            ans += canForm(str, m);
        }
        
        return ans;
    }
};