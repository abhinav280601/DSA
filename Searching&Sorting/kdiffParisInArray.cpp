#include<bits/stdc++.h>
using namespace std;

int findPairs(vector<int>& nums, int k) {
    unordered_map<int,int>mp;
    for(auto x:nums){
        mp[x]++;
    }
    int ans=0;
    for(auto x:mp){
        if(k==0){
            if(x.second>1){
                ans++;
            }
        }
        else if(mp.find(x.first+k)!= mp.end())
        ans++;
    }
    return ans;
    }
    
int main()
{
    return 0;
}