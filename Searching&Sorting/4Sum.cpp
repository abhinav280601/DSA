#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& v, int target) {
    sort(v.begin(),v.end());
    vector<vector<int>> ans;
    long long int sum=0;
    for(int l=0; l<v.size(); l++){
        for(int k=l+1; k<v.size(); k++){
            int i=k+1; 
            int j=v.size()-1;
            while(i<j){
            sum=v[i]+long(v[j])+v[k]+v[l];
            if(sum==target){
               ans.push_back({v[l],v[k],v[i],v[j]});
               int x = v[i] ;
               int y = v[k] ;
                    while(i<j&& v[i]==x){
                        i++;
                    }
                    while(i<j&& v[j]==y){
                       j--;
                    }
            }

            else if(sum<target)
                i++;
            else
                j--;
            }
            while(k+1 < v.size() && v[k] == v[k+1]){
            k++;
            }
        }
        while(l+1 < v.size() && v[l] == v[l+1]){
            l++;}
    }
    return ans;
    }
int main()
{
    return 0;
}