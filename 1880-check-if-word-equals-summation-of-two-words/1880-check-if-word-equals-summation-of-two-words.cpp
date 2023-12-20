class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string t1 = "", t2 = "", t3 = "";
        
        for(auto ch : firstWord)
        {
            t1 += to_string(ch-'a');
        }
        
        for(auto ch : secondWord)
        {
            t2 += to_string(ch-'a');
        }
        
        for(auto ch : targetWord)
        {
            t3 += to_string(ch-'a');
        }
        
        return stoi(t1)+stoi(t2) == stoi(t3);
    }
};