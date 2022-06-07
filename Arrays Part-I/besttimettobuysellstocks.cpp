#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int currMin = INT_MAX;
        int currMax = 0;
        int n = prices.size();
        for(int i=0; i<n; i++){
            if(currMin > prices[i]){
                currMin = prices[i];
            }
            else if(prices[i] - currMin > currMax){
                currMax = prices[i] - currMin;
            }
        }
        return currMax;
}