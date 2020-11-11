#include <iostream>
using namespace std;

int main() {
	//code
		int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    if(n<2){
	        for(int i=0; i<n; i++)
	            cout<<arr[i]<<" ";
	            cout<<endl;
	    }       
	    
	    else{
	    
	    int temp=arr[n-1];
	    for(int i=n; i!=0; i--){
	        arr[i-1]=arr[i-2];
	        
	    }
	    arr[0]=temp;
	    for(int i=0; i<n; i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	    
	}
}
	return 0;
}