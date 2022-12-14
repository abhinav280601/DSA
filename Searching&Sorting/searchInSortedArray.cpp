#include<bits/stdc++.h>
using namespace std;

 int search(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        int mid=i+(j-i)/2;

        while(i<=j){
            if(nums[mid]==target)
               return mid; 
            
            if(nums[i]<=nums[mid]){
              if(nums[mid]>=target && nums[i]<=target){
                j=mid-1;
              } 
              else{
                  i=mid+1;
              }
            }
            else{
                if(target>=nums[mid] && target<=nums[j]){
                    i=mid+1;
                }
                else{
                    j=mid-1;
                }
            }
            mid=i+(j-i)/2;
        }
        return -1;
    }
int main()
{
    return 0;
}