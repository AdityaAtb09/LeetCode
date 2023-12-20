class Solution {
public:
    int percentageLetter(string s, char letter) {
        int cnt = count(s.begin(), s.end(), letter);
        int n = cnt*100/s.length();
        
        return n;
    }
};