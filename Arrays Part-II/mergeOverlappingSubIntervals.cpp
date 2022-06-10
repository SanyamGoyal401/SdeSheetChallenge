#include <bits/stdc++.h> 
using namespace std;
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(),intervals.end());
       vector<vector<int>>mergeintervals;
       int n=intervals.size();
       int start=intervals[0][0];
       int end=intervals[0][1];
       for(int i=1;i<n;i++)
       {
           if(intervals[i][0]<=end)
           {
               end=max(intervals[i][1],end);
           }
           else
           {
               mergeintervals.push_back({start,end});
               start=intervals[i][0];
               end=intervals[i][1];
           }
       }
       mergeintervals.push_back({start,end});
       return mergeintervals;
}
