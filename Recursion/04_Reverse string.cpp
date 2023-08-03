#include<bits/stdc++.h>
using namespace std;
void reverse(string &s,int i,int n){
if(i>=n)return;

swap(s[i],s[n]);
reverse(s,i+1,n-1);
}

int main(){
string s;
cin>>s;
int n=s.size();
reverse(s,0,n-1);
cout<<s;
     return 0;
}
