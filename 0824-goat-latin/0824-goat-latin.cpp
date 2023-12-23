class Solution {
public:
    
    bool isVowel(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            return true;
        }
        
        return false;
    }
    
    string toGoatLatin(string s) {
        vector<string> ans;
        string temp = "", res = "";
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] != ' ')
            {
                temp += s[i];
            }
            else
            {
                ans.push_back(temp);
                temp.clear();
            }
        }
        ans.push_back(temp);
        int n = 1;
        
        for(int i=0; i<ans.size(); i++)
        {
            string t = ans[i];
            
            if(isVowel(t[0]))
            {
                // t.push_back('m');
                // t.push_back('a');
                t += "ma";
            }
            else
            {
                char u = t[0];
                t.erase(0, 1);
                // t.push_back(u);
                // t.push_back('m');
                // t.push_back('a');
                t += u;
                t += "ma";
            }
            
            int j = i+1;
            while(j != 0)
            {
                // t.push_back('a');
                t += 'a';
                j--;
            }
            
            res = res + t + ' ';
        }
        res.pop_back();
        
        return res;
    }
};