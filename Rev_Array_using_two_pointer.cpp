#include<iostream>
using namespace std;
int rev_Array(int a[], int n){
    int first=0; int last=n-1;
    while(first<last){
        
        int temp=a[first];
        a[first]=a[last];
        a[last]=temp;
        first+=1;
        last-=1;
    }
}


int main(){
    int n;
    cout<<"Enter the number of elements in array\n";
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
    rev_Array(arr,n);
     cout<<"sorted elements in array\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}