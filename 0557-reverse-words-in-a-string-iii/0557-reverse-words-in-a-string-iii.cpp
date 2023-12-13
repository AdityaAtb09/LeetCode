class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string temp, ans;
        int n = s.length();
        
        for(int i=0; i<n; i++)
        {
            if(s[i] == ' ')
            {
                v.push_back(temp);
                temp = "";
            }
            else
            {
                temp += s[i];
                if(i == n-1)
                {
                    v.push_back(temp);
                }
            }
        }
        
        for(int i=0; i<v.size(); i++)
        {
            string t = v[i];
            int s = 0, e = t.length()-1;
            
            while(s <= e)
            {
                swap(t[s], t[e]);
                s++;
                e--;
            }
            
            ans += t + " ";
        }
        ans.pop_back();
        
        return ans;
    }
};