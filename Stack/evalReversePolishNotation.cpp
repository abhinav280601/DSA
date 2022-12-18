#include<bits/stdc++.h>
using namespace std;
int evalRPN(vector<string>& tokens) {
    stack< long long>s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+"&&tokens[i]!="-"&&tokens[i]!="*"&&tokens[i]!="/")
                s.push(stoi(tokens[i]));
            else{
                long long a=s.top();
                s.pop();
                long long b=s.top();
                s.pop();
                if(tokens[i]=="+")
                    s.push(b+a);
                else if(tokens[i]=="-")
                    s.push(b-a);
                else if(tokens[i]=="*")
                    s.push(b*a);
                else if(tokens[i]=="/")
                    s.push(b/a);
            }
        }
        return s.top();
    }
int main()
{
    return 0;
}