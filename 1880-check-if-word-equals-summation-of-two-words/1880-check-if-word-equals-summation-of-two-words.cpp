class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        unordered_map<char, int> m;
        char ch = 'a';
        string t1 = "", t2 = "", t3 = "";
        
        for(int i=0; i<26; i++)
        {
            m[ch++] = i;
        }
        
        for(int i=0; i<firstWord.length(); i++)
        {
            t1 += to_string(m[firstWord[i]]);
        }
        
        for(int i=0; i<secondWord.length(); i++)
        {
            t2 += to_string(m[secondWord[i]]);
        }
        
        for(int i=0; i<targetWord.length(); i++)
        {
            t3 += to_string(m[targetWord[i]]);
        }
        
        int n1 = stoi(t1);
        int n2 = stoi(t2);
        int n3 = stoi(t3);
        
        return n1+n2 == n3;
    }
};