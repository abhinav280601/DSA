#include<bits/stdc++.h>

using namespace std;
 vector<int> twoSum(vector<int>& n, int t) {
     
        vector<int> ans;
       vector<pair<int,int>> m;
        for(int i=0; i<n.size(); i++){
           m.push_back(make_pair( n[i], i ));
        }
        
        sort(m.begin(),m.end());
        
        int i=0;
        int j=m.size()-1;
        while(i<j){
            if(m[i].first+m[j].first == t){
                ans.push_back(m[i].second);
                 ans.push_back(m[j].second);
                break;
            }
            else if(m[i].first+m[j].first <t){
                i++;
            }
            else if(m[i].first+m[j].first >t){
                j--;
            }
        }
       
        return ans;
    }
int main() {
    
    return 0; 
}