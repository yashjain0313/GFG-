class Solution {
  public:
    // Function to find the length of longest increasing subarray
    int lenOfLongIncSubArr(vector<int> &a) {
        int n = a.size();
        vector<int>dp(n+1,0);

        dp[0]=1;

        for(int i=1;i<n;i++)
        {
            if(a[i] > a[i-1])
            {
                dp[i]=1+dp[i-1];
                // cout<<dp[i]<<endl;
            }
            else{
                dp[i]=1;
            }
        }


        return *max_element(dp.begin(),dp.end());
    }
};
 