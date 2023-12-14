class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string temp = "";
        
        for(int i=0; i<words.size(); i++)
        {
            string str = words[i];
            temp += str[0];
        }
        
        return temp == s;
    }
};