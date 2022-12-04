#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1,temp;
    int j=l;
    while(j<r){
        if(arr[j]<=arr[r]){
            i++;
    temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
        }
        j++;
    }

temp=arr[i+1];
	arr[i+1]=arr[r];
	arr[r]=temp;
return i+1;
}

void QuickSort(int arr[],int l,int r){
    if(l<r){
        int q=partition(arr,l,r);
        QuickSort(arr,l,q-1);
        QuickSort(arr,q+1,r);
    }
}
int main(){
    
    int n;
    cout<<"No of elements:";
   cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    QuickSort(arr,0,n-1);
  cout<<"After Sorting :";
display(arr,n);
     return 0;
}
