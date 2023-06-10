class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string r = s;
        reverse(r.begin() , r.end());
        if(r==s){
            return true;
        }
        return false;
    }
};