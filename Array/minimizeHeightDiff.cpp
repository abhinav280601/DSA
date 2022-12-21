#include<bits/stdc++.h>
using namespace std;
 int getMinDiff(int arr[], int n, int k) {
    sort(arr,arr+n);
    int mina;
    int maxa;
    int mindiff=arr[n-1]-arr[0];
    
    for(int i=0; i<n-1; i++){
    mina=min(arr[0]+k,arr[i+1]-k);
    maxa=max(arr[n-1]-k,arr[i]+k);
    
    if(mina<0)
    continue;
    
    mindiff= min(mindiff, maxa-mina);
    }
    return mindiff;
    }
int main()
{
    return 0;
}