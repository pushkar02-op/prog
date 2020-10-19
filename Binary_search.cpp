#include<iostream>
using namespace std;
int BinarySearch(int arr[],int front, int rear, int value){
    if(rear>=front){
        int mid=front+(rear-front)/2;
        if(value==arr[mid]){
            return mid;
        }
        else if(value<arr[mid]){
            return BinarySearch(arr,front,mid-1,value);
        }
        else{
            return BinarySearch(arr,mid+1,rear,value);
        }
    }
    return -1;
}

int main(){
    int n, num;
    cout<<"Enter the number of elements in Array\n";
    cin>>n;
    int myarr[n];
    cout<<"Enter the elements of array\n";
    for(int i=0; i<n; i++){
        cin>>myarr[i];
    }
    cout<<"Enter the element to be searched\n";
    cin>>num;
    int result=BinarySearch(myarr,0,n-1,num);
    if(result==-1){
        cout<<"Not found\n";
    }
    else{
        cout<<"The element "<<num<<" is found at "<<result<<endl;
    }  
}