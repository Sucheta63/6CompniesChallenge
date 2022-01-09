#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxProfit(int k, int n, int A[]) {
        int dp[k+1][n];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=k;i++){
            int max1=INT_MIN;
            for(int j=1;j<n;j++){
                if(dp[i-1][j-1]-A[j-1]>max1){
                    max1=dp[i-1][j-1]-A[j-1];
                }
                if(max1+A[j]>dp[i][j-1]){
                    dp[i][j]=max1+A[j];
                }
                else{
                    dp[i][j]=dp[i][j-1];
                }
            }
        }
        return dp[k][n-1];
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int A[N];
        for (int i = 0; i < n; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(k, n, A) << endl;
    }
    return 0;
}  
