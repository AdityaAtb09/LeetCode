class Solution {
public:
    string smallestNumber(string s) {
        string ans;
        int n = s.size(), j = 0;
        
        for(int i=0; i<=s.size(); i++)
        {
            ans.push_back('1'+i);
            
            if(i==n || s[i]=='I')
            {
                reverse(ans.begin()+j, ans.end());
                j = i+1;
            }
        }
        
        return ans;
    }
};