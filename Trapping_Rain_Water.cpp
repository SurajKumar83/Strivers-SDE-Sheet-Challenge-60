#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    vector<long>left(n,0),right(n,0);
    left[0]=arr[0];
    right[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],arr[i]);
    }
    long sum=0;
    for(int i=0;i<n;i++){
        sum+=min(right[i],left[i])-arr[i];
    }
    return sum;
}
// 2nd way to solve is without using left and right vector
#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    long sum=0;
    long left=0,right=0;
    int i=0,j=n-1;
    while(i<=j){
        if(arr[i]<=arr[j]){
            if(arr[i]>=left){
                left=arr[i];
            }else{
                sum+=(left-arr[i]);
            }
            i++;
        }
        else{
            if(arr[j]>=right){
                right=arr[j];
            }
            else{
                sum+=(right-arr[j]);
            }
            j--;
        }
    }
    return sum;
}
