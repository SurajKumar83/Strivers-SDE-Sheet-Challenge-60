// Brute Force
#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            for(int k=j+1;k<n-1;k++)
            {
                for(int l=k+1;l<n;l++){
                   if(arr[i]+arr[j]+arr[k]+arr[l]==target){
                       return "Yes";
                   }
                }
            }
        }
    }
    return "No";
}

// most optimal 
#include <bits/stdc++.h>
string fourSum(vector<int> arr, int target, int n) {
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        // skipping the duplicates
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(j>i+1 && arr[j]==arr[j-1]){
                continue;
            }
            int k=j+1;
            int l=n-1;
            while(k<l){
                long long sum = arr[i];
                sum += arr[j];
                sum += arr[k];
                sum += arr[l];
                if(sum==target){
                    return "Yes";
                }
                else if (sum < target) k++;
                else l--;
            }
        }
    }
    return "No";
}
