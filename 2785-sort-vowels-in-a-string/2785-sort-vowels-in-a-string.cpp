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
    
    string sortVowels(string s) {
        string temp = "";
        int j = 0;
        
        for(int  i=0; i<s.length(); i++)
        {
            if(isVowel(s[i]))
            {
                temp.push_back(s[i]);
            }
        }
        
        sort(temp.begin(), temp.end());
        
        for(int i=0; i<s.length(); i++)
        {
            if(isVowel(s[i]))
            {
                s[i] = temp[j];
                j++;
            }
        }
        
        return s;
    }
};