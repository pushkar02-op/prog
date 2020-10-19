#include<iostream>
using namespace std;
int linear_search(int arr[], int elem,int size){
    int temp=0;
    for(int i=0; i<size; i++){
        if(elem==arr[i]){
            temp=1;
            return i;

        }
    }
    return temp;
}

int main(){
    int n,element;
    cout<<"Enter the size of array\n";
    cin>>n;
    int myarr[n];
    cout<<"enter the elements of array\n";
    for(int i=0; i<n; i++){
        cin>>myarr[i];
    }
    cout<<"Enter the element to be searched\n";
    cin>>element;
    int index=linear_search(myarr,element,n);
    if(index==0){
        cout<<"Element not found\n";
    }
    else{
        cout<<"The element"<<element<<"is found at index "<<index<<endl;
    }
    return 0;
}