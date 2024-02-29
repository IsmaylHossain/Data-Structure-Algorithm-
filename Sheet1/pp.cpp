#include <iostream>
using namespace std;

int main() {
	//code
	int t,sum=0;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    for(int i=n -1;i>=0;i++){
	        if(i==0||i%2==0)
	            sum+=(arr[i]*arr[i]);
	        else
	        sum-=(arr[i]*arr[i]);
	    
	    }
	    cout<<sum<<endl;
	}
	
	return 0;
}