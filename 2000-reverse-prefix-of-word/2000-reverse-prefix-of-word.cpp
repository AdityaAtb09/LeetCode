class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        if(word.find(ch) != string::npos)
        {
            int n = word.find(ch);
            reverse(word.begin(), word.begin()+n+1);
        }
        
        return word;
    }
};