class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int n=s.size();
        int res=0;
        for(int i=0;i<n;i++) {
            int space=0;
            for(int j=0;j<s[i].size();j++) {
                if(s[i][j]==' ') space++;
            }
            res=max(res,space+1);
        }
        return res;
    }
};
// asdfggh
// a s d


// TC: O(n*m)
// SC: O(n)     -> O(1)
    
