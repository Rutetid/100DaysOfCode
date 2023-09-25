#include <iostream>
using namespace std;

int Number(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= arr[i];
    }
    return result;
}

int main() {
	// your code goes here
	int t,size,element;
	cin>>t;
	while(t--){
	    cin>>size;
	    int arr[size];
	    for(int i=0;i<size;i++){
	        cin>>arr[i];
	    }
	    
	    int ans= Number(arr,size);
	    cout<<ans<<endl;
	}
	return 0;
}
