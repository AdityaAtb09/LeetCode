class Solution {
public:
    
    bool isVowel(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            return true;
        }
        
        return false;
    }
    
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt = 0;
        
        for(int i=left; i<=right; i++)
        {
            string temp = words[i];
            
            if(isVowel(temp[0]) && isVowel(temp[temp.length()-1]))
            {
                cnt++;
            }
        }
        
        return cnt;
    }
};