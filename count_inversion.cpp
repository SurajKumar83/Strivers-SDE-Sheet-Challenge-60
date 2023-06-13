#include <bits/stdc++.h> 
long long inv=0;
void merge(long long a[],int low,int mid,int high){
    long long b[high+1];
    int i=low,k=low;
    int j=mid+1;
    while(i<=mid && j<=high){
        if(a[i]<=a[j]){
            b[k++]=a[i++];

        }
        else{
            b[k++]=a[j++];
            inv+=mid-i+1;
        }
    }
    while(i<=mid){
        b[k++]=a[i++];
    }
    while(j<=high)
    {
        b[k++]=a[j++];
    }
    for(int i=low;i<=high;i++){
        a[i]=b[i];
    }
}
void mergesort(long long a[],int low,int high){
    if(low<high){
        int mid=(high+low)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
long long getInversions(long long *arr, int n){
      mergesort(arr,0,n-1);
      return inv;
}
//Method 2
#include <bits/stdc++.h> 
 
long long merge(long long a[],int low,int mid,int high){
    long long b[high+1];
    int i=low,k=low;
    int j=mid+1;
  long long inv=0;
    while(i<=mid && j<=high){
        if(a[i]<=a[j]){
            b[k++]=a[i++];

        }
        else{
            b[k++]=a[j++];
            inv+=mid-i+1;
        }
    }
    while(i<=mid){
        b[k++]=a[i++];
    }
    while(j<=high)
    {
        b[k++]=a[j++];
    }
    for(int i=low;i<=high;i++){
        a[i]=b[i];
    }
  return inv;
}
long long mergesort(long long a[],int low,int high){
 long long ans=0;
    if(low>=high) return ans;
        int mid=(high+low)/2;
        ans+=mergesort(a,low,mid);
        ans+=mergesort(a,mid+1,high);
        ans+=merge(a,low,mid,high);
    
  return ans;
}
long long getInversions(long long *arr, int n){
     
      return  mergesort(arr,0,n-1);;
}
