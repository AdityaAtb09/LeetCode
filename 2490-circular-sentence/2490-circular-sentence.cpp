class Solution {
public:
    bool isCircularSentence(string s) {
        string temp = "";
        vector<string> v;
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] != ' ')
            {
                temp += s[i];
            }
            else
            {
                v.push_back(temp);
                temp.clear();
            }
        }
        v.push_back(temp);
        
        for(int i=1; i<v.size(); i++)
        {
            string t1 = v[i-1];
            string t2 = v[i];
            char c1 = t1[t1.length()-1];
            char c2 = t2[0];
            
            if(c1 != c2)
            {
                return false;
            }
        }
        
        string a1 = v[0];
        string a2 = v[v.size()-1];
        char c1 = a1[0];
        char c2 = a2[a2.length()-1];
        
        if(c1 != c2)
        {
            return false;
        }
        
        return true;
    }
};