#include<bits/stdc++.h>

using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
      int i=0;
      int j=nums.size()-1;
      vector<int>ans;
      int mid=i+(j-i)/2;
      int lo=-1;
      int ro=-1;
      while(i<=j){
       if(nums[mid]==target){
       lo=mid;
       j=mid-1;
       }
       else{
       if(nums[mid]>target)
       j=(mid)-1 ;
       else
       i=(mid)+1;
       }
       mid=i+(j-i)/2;
      }
       i=0;
       j=nums.size()-1;
       mid=i+(j-i)/2;
       while(i<=j){
       if(nums[mid]==target){
       ro=mid;
       i=mid+1;
       }
       else{
       if(nums[mid]>target)
       j=(mid)-1 ;
       else
       i=(mid)+1;
       }
       mid=i+(j-i)/2;
      }
      ans.push_back(lo);
      ans.push_back(ro);
      return ans;
    }
int main()
{
    return 0;
}