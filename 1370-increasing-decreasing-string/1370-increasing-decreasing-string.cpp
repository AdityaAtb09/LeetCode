class Solution {
public:
    string sortString(string s) {
        map<char, int> m;
        string ans = "", temp = "";
        
        for(auto ch : s)
        {
            m[ch]++;
        }
        
        while(ans.length() < s.length())
        {
            for(auto it : m)
            {
                if(it.second > 0)
                {
                    ans += it.first;
                    m[it.first]--;
                }
            }
            
            for(auto it : m)
            {
                if(it.second > 0)
                {
                    temp += it.first;
                    m[it.first]--;
                }
            }
            
            reverse(temp.begin(), temp.end());
            ans += temp;
            temp.clear();
        }
        
        return ans;
    }
};