#include<bits/stdc++.h>
using namespace std;
int minEatingSpeed(vector<int>& piles, int h) {
    int n=piles.size();
    int maxb=0;

    for(int i=0; i<n; i++){
    if(maxb<piles[i])
       maxb=piles[i];
    }

    int ans=maxb;
    cout<<"maxb "<<maxb<<endl;
    int i=1;
    int j=maxb;
    int mid= i + (j-i)/2;

    while(i<=j){
    double tt=0;
    for(int i=0; i<n ; i++){
     double d=(double)piles[i]/(double)mid;
     tt=tt+ceil(d);
    }
    cout<<endl;
    cout<<"tt "<<tt<<endl;
    
    if(tt<=h){
        ans=min(ans,mid);
        j=mid-1;}
    else
        i=mid+1;

    mid= i + (j-i)/2;
    cout<<"mid "<<mid<<endl;
    }
     
    return ans;
    }
int main()
{
    return 0;
}