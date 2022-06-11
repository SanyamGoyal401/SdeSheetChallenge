#include <bits/stdc++.h> 
using namespace std;
int uniquePaths(int m, int n) {
	vector<vector<int>>dp(m+1,vector<int>(n+1));
        
        for(int i=0; i<n; i++)dp[m-1][i] = 1;
        
        for(int i=m-2; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                dp[i][j] = dp[i+1][j] + dp[i][j+1];
            }
        }
        return dp[0][0];
}