#include<bits/stdc++.h>
using namespace std;
void help(int i,int &min_val,int &max_val,vector<int>arr){
if(i==arr.size())return;
if(arr[i]<min_val)min_val=arr[i];
if(arr[i]>max_val)max_val=arr[i];
help(i+1,min_val,max_val,arr);

}

int main(){
int n;
cin>>n;
vector<int>arr(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}

int min_val=INT_MAX,max_val=INT_MIN;
help(0,min_val,max_val,arr);

cout<<"MIN Val:"<<min_val<<endl;
cout<<"MAX Val:"<<max_val<<endl;

     return 0;
}
