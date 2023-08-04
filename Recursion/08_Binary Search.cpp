#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int l,int r,vector<int>arr,int k){
    if(l>r)return -1;
    int mid=(l+r)/2;
    if(arr[mid]==k)return mid;
  if(arr[mid]<k)return BinarySearch(mid+1,r,arr,k);
  return BinarySearch(l,mid-1,arr,k);


}

int main(){
int n,target;
cout<<"Size of Array:";
cin>>n;
vector<int>arr(n);
cout<<"Enter "<<n<<" element in sorted order:";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Enter target Value:";
cin>>target;
int ind=BinarySearch(0,n-1,arr,target);
if(ind==-1)cout<<"NOT FOUND";
else{
    cout<<"Found at index "<<ind;
}
     return 0;
}
