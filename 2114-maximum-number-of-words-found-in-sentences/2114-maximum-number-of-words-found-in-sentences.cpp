class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int ans = INT_MIN;
        
        for(auto it : sentences)
        {
            int cnt = count(it.begin(), it.end(), ' ');
            ans = max(ans, cnt+1);
        }
        
        return ans;
    }
};