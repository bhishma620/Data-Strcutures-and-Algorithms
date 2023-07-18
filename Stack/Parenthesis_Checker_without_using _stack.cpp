
/*
  Parenthesis Checker
Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.
For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).
  */


#include<bits/stdc++.h>
using namespace std;

bool help(int i,vector<char>ind,string s){
    int n=s.size();
    int v=ind.size();

    if(i>=n && v==0)return true;

    if(s[i]=='('||s[i]=='{'||s[i]=='['){
        ind.push_back(s[i]);
      return  help(i+1,ind,s);
    }
    
    if(!v)return false;

    if( (s[i]==')'&& ind[v-1]=='(') || (s[i]=='}' && ind[v-1]=='{') || (s[i]==']' && ind[v-1]== '[') ){
         ind.pop_back();
        return  help(i+1,ind,s);
    }

    return false;
}

int main(){

string s;
cin>>s;
vector<char>temp;
bool check=help(0,temp,s);
if(check)cout<<"YES";
else cout<<"NO";
return 0;

}
