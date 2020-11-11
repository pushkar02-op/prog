#include<bits/stdc++.h>

using namespace std;

int maxSubarraySum(int arr[], int n){
    
    int x=INT_MIN;
    
    int sum=0;
    for(int i=0; i<n; i++){
        
       sum=max(arr[i],arr[i]+sum);
       if(sum>x){
           x=sum;
       }
    }  
    return x;
}
int main(){
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        cout<<maxSubarraySum(a,n);

    }
    
}