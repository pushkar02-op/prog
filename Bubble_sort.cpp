#include<iostream>
using namespace std;
int Bubble(int a[],int n){
    for(int i=0; i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }

}
int main(){
    int n;
    cout<<"Enter the number od elements in array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Unsorted elements in array\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    Bubble(arr,n);
    cout<<"sorted elements in array\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}