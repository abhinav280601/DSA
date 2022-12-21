#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>& nums) {
    int i=0;
    int j=nums.size()-1;
    int mid= i+(j-i)/2;

    while(i<j){
        if(nums[mid]<=nums[j])
        j=mid;
        else
        i=mid+1;

        mid=i + (j-i)/2;
    }
    
    return nums[mid];
    }
int main()
{
    return 0;
}