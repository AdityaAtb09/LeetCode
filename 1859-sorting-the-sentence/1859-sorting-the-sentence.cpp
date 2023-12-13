class Solution {
public:
    string sortSentence(string s) {
        vector<string> v(10, "");
        string ans;
        
        for(int i=0; i<s.length(); i++)
        {
            string temp;
            
            while(!isdigit(s[i]))
            {
                temp += s[i++];
            }
            
            v[s[i++]-'0'] = temp;
        }
        
        for(int i=1; i<10; i++)
        {
            if(v[i].length() > 0)
            {
                ans += v[i] + " ";
            }
        }
        
        ans.pop_back();
        
        return ans;
    }
};