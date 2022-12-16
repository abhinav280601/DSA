#include<bits/stdc++.h>
using namespace std;

long long countTriplets(long long arr[], int n, long long sum)
	{
	    sort(arr,arr+n);
	    long long ans=0;
	    for(int k=0; k<n-2;k++){
	        int i=k+1; 
	        int j=n-1;
	        while(i<j){
	            if(arr[i]+arr[j]+arr[k] >=sum){
	                j--;
	            }
	            else{
	                ans+=(j-i);
	                i++;
	            }
	        }
	    }
	    return ans;
	    
	}
int main()
{
    return 0;
}