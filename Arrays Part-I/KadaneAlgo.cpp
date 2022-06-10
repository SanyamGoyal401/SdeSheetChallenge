#include <bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(int nums[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long int cs =nums[0];
    long long int ms = nums[0];
    for(int i=1; i<n; i++){
        cs = max<long long>(nums[i], cs + nums[i]);
        ms = max(ms, cs);
        
    }
        return max<long long>(0,ms);
}