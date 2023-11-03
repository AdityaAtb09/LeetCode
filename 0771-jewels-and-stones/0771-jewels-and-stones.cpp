class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int ans = 0;
        unordered_map<char, int> m;
        
        for(char i : stones)
        {
            m[i]++;
        }
        
        for(char i : jewels)
        {
            ans += m[i];
        }
        
        return ans;
    }
};