/*
Kth smallest element
Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array.
It is given that all array elements are distinct.
*/
Time Complexity->O(N)
Space Complexity->O(K)


#include<bits/stdc++.h>
using namespace std;
int kth_smallest(vector<int>arr,int k){
    int n=arr.size();
    priority_queue<int>max_heap;

for(int i=0;i<n;i++){
     max_heap.push(arr[i]);
     if(max_heap.size()>k){
        max_heap.pop();
     }
}

return max_heap.top();
     
}

int main(){
  int n,k;
  cin>>n>>k;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int val=kth_smallest(arr,k);
  cout<<val<<endl;

    return 0;
}
