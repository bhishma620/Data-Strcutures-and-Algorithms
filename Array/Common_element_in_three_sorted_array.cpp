/*Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
Input:
n1 = 6; A = {1, 5, 10, 20, 40, 80}
n2 = 5; B = {6, 7, 20, 80, 100}
n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
Output: 20 80
Explanation: 20 and 80 are the only
common elements in A, B and C */


#include<bits/stdc++.h>
using namespace std;
vector<int>common_element(vector<int>arr1,vector<int>arr2,vector<int>arr3){
    vector<int>ans;
int n1=arr1.size();
int n2=arr2.size();
int n3=arr3.size();
int i=0,j=0,k=0;

while(i<n1 && j<n2 && k<n3){
 
if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
ans.push_back(arr1[i]);
i++,j++,k++;
continue;
}

if(arr1[i]<arr2[j]){
    i++;
}
else if(arr1[i]>arr2[j]){
    j++;
}

if(i<n1&& arr1[i]<arr3[k]){
    i++;
}
else if(arr1[i]>arr3[k]){
    k++;
}

}
return ans;

}
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    vector<int>arr1(n1),arr2(n2),arr3(n3);
    
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    for(int i=0;i<n3;i++){
        cin>>arr3[i];
    }

    vector<int>ans=common_element(arr1,arr2,arr3);

    for(auto i:ans){
        cout<<i<<" ";
    }

    return 0;
}
