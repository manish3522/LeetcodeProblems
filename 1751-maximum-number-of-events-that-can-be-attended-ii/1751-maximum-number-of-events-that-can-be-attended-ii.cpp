class Solution {
public:
    int upperbound(vector<vector<int>>& events,int num) {
        int l=0,r=events.size();
        while(l<r) {
            int mid=(l+r)/2;
            if(events[mid][0]>num) r=mid;
            else l=mid+1;
        }
        return r;
    }
    int f(int start, vector<vector<int>>& events, vector<vector<int>>& dp, int k) {
        if(start==events.size() || k==0) return 0;
        if(dp[start][k]!=-1) return dp[start][k];
        vector<int> find;
        int index=upperbound(events,events[start][1]);
        int ans=events[start][2]+f(index,events,dp,k-1);
        ans=max(ans,f(start+1,events,dp,k));
        return dp[start][k]=ans;
    }
    int maxValue(vector<vector<int>>& events, int k) {
        vector<vector<int>> dp(events.size()+1, vector<int>(k+1,-1));
        sort(events.begin(), events.end());
        f(0, events, dp, k);
        int ans=0;
        for(int i=1;i<=k;i++) if(dp[0][i]!=-1) ans+=dp[0][i];
        return ans;
    }
};