#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int cs =nums[0];
    int ms = nums[0];
    int n = nums.size();
    for(int i=1; i<n; i++){
        cs = max(nums[i], cs + nums[i]);
        ms = max(ms, cs);
        
    }
        return ms;
        
    }
};