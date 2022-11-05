class Solution {
public:
    bool f(int a, int b) {
        if(a%2!=b%2) return false;
        return true;
    }
    bool squareIsWhite(string s) {
        return f(s[0]-'a',s[1]-'0');
    }
};

// b3 -> f(1,3)
//     'a'-'a'=0
//     'b'-'a'=1