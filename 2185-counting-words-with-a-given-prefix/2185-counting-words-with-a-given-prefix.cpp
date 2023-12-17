class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        
        for(int i=0; i<words.size(); i++)
        {
            string temp = words[i];
            int n = temp.find(pref);
            
            if(temp.find(pref) != string::npos && n==0)
            {
                cnt++;
            }
        }
        
        return cnt;
    }
};