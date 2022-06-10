#include <bits/stdc++.h> 
using namespace std;
int findMajorityElement(int num[], int n) {
	map<int,int> mp;
    for (int i = 0; i < n; ++i) {
        mp[num[i]] += 1;
    }
    int res;
    for(int i=0; i<n; i++){
        if(mp[num[i]] > n/2){
            return num[i];
        }
    }
    return -1;
}