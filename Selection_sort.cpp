#include<iostream>
using namespace std;

int findMin(int a[],int n){
    for(int i=0; i<n-1; i++){
        int min=i;
        for(int j=i+1;j<n; j++){
            if(a[min]>a[j]){
                min=j;
                
            }
        }
        if(min!=i){
            int temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
}

int main(){
    int n;
    cout<<"enter the number of elements in array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Unsorted elements in array\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    findMin(arr,n);
    cout<<"sorted elements in array\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}