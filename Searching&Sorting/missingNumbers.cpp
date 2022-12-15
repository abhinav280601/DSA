#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int sum=0;
    int n=nums.size();
    for(int i=0; i<nums.size();i++){
     sum+=nums[i];
    } 
    int sumog=n*(n+1)/2;
    return sumog-sum;
    }
    
int main()
{
    return 0;
}