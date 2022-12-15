#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
        unordered_map<int ,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        int max=INT_MIN;
        int ans=0;
        for(auto x:mp){
            if(max<x.second){
                max=x.second;
                ans = x.first;
            }
        }
        return ans;
    }
int main()
{
    return 0;
}