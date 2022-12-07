#include <bits/stdc++.h>
using namespace std;
 int n;
void R(int i,int arr[]){
    if(i>=n/2)return;
    swap(arr[i],arr[n-i-1]);
    return R(i+1,arr);
}
int main(){
   
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    R(0,arr);
    cout<<"After Reversing the array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
