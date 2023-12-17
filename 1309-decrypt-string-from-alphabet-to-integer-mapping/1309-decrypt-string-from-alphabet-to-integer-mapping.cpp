class Solution {
public:
    string freqAlphabets(string s) {
        string ans;
        
        for(int i=0; i<s.length();)
        {
            if(i<s.length()-2 && s[i+2]=='#')
            {
                ans += 'j' + (s[i]-'1')*10 + s[i+1] - '0';
                i += 3;
            }
            else
            {
                ans += 'a' + (s[i]-'1');
                i++;
            }
        }
        
        return ans;
    }
};