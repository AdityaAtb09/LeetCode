class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        
        for(int i=0; i<details.size(); i++)
        {
            string temp = details[i];
            int n = (temp[11]-'0')*10 + (temp[12]-'0');
            
            if(n > 60)
            {
                cnt++;
            }
        }
        
        return cnt;
    }
};