#include <bits/stdc++.h> 
using namespace std;
vector<int> majorityElementII(vector<int> &nums)
{
     vector<int>ans;
        int count1=0;
        int count2=0;
        int num1=-1;
        int num2=-1;
        for(int i=0;i<nums.size();i++){
            if(num1==nums[i]){
                count1++;
            }
            else if(num2==nums[i]){
                count2++;
            }
            else if(count1==0){
                num1=nums[i];
                count1=1;
            }
            else if(count2==0){
                num2=nums[i];
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        
        // counting number of times the majority elements are appearing
        int c1=0;
        int c2=0;
        for(int i=0;i<nums.size();i++){
            if(num1==nums[i]){
                c1++;
            }
            else if(num2==nums[i]){
                c2++;
            }
        }
        //checking if the majority element is appearing more than n/3 times
        if(c1>nums.size()/3){
            ans.push_back(num1);
        }
        if(c2>nums.size()/3){
            if(num1!=num2){
            ans.push_back(num2);
            }
        }
        
        return ans;
        

}